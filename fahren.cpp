#include<iostream>
using namespace std;
int main()
{ int min;
cin>>min;
int max;
cin>>max;
int step;
cin>>step;
int i=min;
while(i<=max)
{
   int c=(5)*(i-32)/9;
    cout<<i<<" "<<c<<endl;
     i=i+step;
}      
   return 0;
}