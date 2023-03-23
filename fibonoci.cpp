#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b =1;
    int n;
    cin>>n;
    
    int sum =0;
    int i=0;
    while(i<=n-2)
    {
      sum = a+b;
      a=b;
      b=sum;

      i++;

    
    }
      cout<<sum<<endl;
      return 0;
}