#include<iostream>
using namespace std;
int main()
{
    int number ;
    cin>>number;
    int inverse=0;
   int remainder;
    while(number!=0)
    {
       remainder =number%10;
       inverse =inverse *10 + remainder;
       number/=10;
    }
    cout<<inverse;
    return 0;
}