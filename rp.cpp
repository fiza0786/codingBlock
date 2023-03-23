#include <iostream>
using namespace std;

int main() {
    int num;
    
    cin >> num;

    int newNum = 0;
    int multiplier = 1;
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0) {
            digit = 5;
        }
        newNum += digit * multiplier;
        multiplier *= 10;
        num /= 10;
    }

    cout << newNum << endl;

    return 0;
}
