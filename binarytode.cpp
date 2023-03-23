#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num == 0) {
        cout << "The new number is: 5" << endl;
        return 0;
    }
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
    cout << "The new number is: " << newNum << endl;
    return 0;
}
