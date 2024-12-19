#include<iostream>
using namespace std;
void armst_num(int original,int rem,int num,int n)
{ num=0;
     original=n;
    while(original!=0)
    {
        rem=original%10;
        num=num+(rem*rem*rem);
        original=original/10;
    }
        if(n==num)
        {
            cout<< "t";
        }
        else{
            cout<<"f";
        }
}
int main()
{
    int n, original,rem,num;
    cin>> n;
    armst_num(n, original,rem,num);
    return 0;
}