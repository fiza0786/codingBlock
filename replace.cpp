#include <iostream>
using namespace std;

int main() {
    long long num;
    cin >> num;
	
	if(num==0)
	{
		cout<<5<<endl;
	}
	else
	{
    bool replaced = false;
    long long newNum = 0, orgin = num;
    long long multiplier = 1;
    while (num != 0) {
        int digit = num % 10;
        if (digit == 0) {
            replaced = true;
            digit = 5;
        }
        newNum += digit * multiplier;
        multiplier *= 10;
        num /= 10;
    }
    if (replaced) {
        cout << newNum << endl;
    } else {
        cout << orgin << endl;
    }
	}
	
    return 0;
}
