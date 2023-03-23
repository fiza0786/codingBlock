#include<iostream>
using namespace std;
int main()
{
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    int i=1;
    int series;
    while(i<=n1)
    {
         series=3*i+2;
        if(series%n2==0)
        {
           i++; 
        }
        else
        {
        cout<<series<<endl;
        i++;
        }
    }
    return 0;
}