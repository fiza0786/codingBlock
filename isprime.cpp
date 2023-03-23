#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int i = 2;
    while (i <= N - 1) {
        if (N % i == 0) {
            cout << "Not Prime";
            return 0;
        }
        i++;
    }
    cout << "Prime";
    return 0;
}





