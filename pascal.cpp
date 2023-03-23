#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    
    int row = 1;
    while (row <= n) {
        int val = 1;
        int col = 1;
        while (col <= row) {
            cout << val << " ";
            val = val * (row - col) / col;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}





