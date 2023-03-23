#include<iostream>
using namespace std;
int main()
{
int a=-1, b=9, c=0, d=1;
if(a++ and b-- and c++)
{
    cout<<"hello"<<endl;
}
else if(a++ and b-- and --c)
{
    cout<<"world"<<endl;
}
else if(++a and d-- and b++)
{
    cout<<"coding"<<endl;
}
else
{
    cout<<"blocks"<<endl;
}
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;


}