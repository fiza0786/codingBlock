#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    int xor_result = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        xor_result ^= num;
    }

    int rightmost_set_bit = xor_result & ~(xor_result - 1);

    int first_num = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & rightmost_set_bit) {
            first_num ^= arr[i];
        }
    }

    int second_num = xor_result ^ first_num;

    if (first_num < second_num) {
        cout << first_num << " " << second_num << endl;
    } else {
        cout << second_num << " " << first_num << endl;
    }

    return 0;
}
