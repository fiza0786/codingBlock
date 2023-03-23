#include<iostream>
using namespace std;

int main()
{
    int number = 2, sum = 0;
    while( number <= 10)
    {
        if(number %2 ==0)
        {
            cout<< number<< " ";
            cout<< endl;
        }
        number = number+1;
        sum = sum + number;
    }
    cout<<"the sum of all the even number"<< sum;
}