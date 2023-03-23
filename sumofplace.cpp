#include <iostream>

using namespace std;

int main() {
    int N, odd_place = 0, even_place= 0, position = 1;
    cin >> N;

    while (N > 0) {
        int digit = N % 10;
        N /= 10;

        if (position % 2 == 0) {
            cout<<digit;
        } else {
             ;
        }

        position++;
    }

    cout <<  odd_sum << endl;
    cout  << even_sum << endl;

    return 0;
}
