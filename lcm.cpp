#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cin>>num1;
    int ans1 =0; 
   
    int i=2;
    while(i<=num1 )
    {
        ans1=num1/i; 
        cout<<ans1;  
        i++;
    }
    cout<<ans1;
}