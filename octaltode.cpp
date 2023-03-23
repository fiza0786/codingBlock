#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int num ;
    cin>>num;
    int re =0;
    int i=0,decimal=0;
    while(num!=0)
    {
        re=num%10;
        decimal=decimal+pow(8,i)*re;
        num =num/10;
        i++;
    }
        cout<<decimal<<endl;
   
    return 0;
}