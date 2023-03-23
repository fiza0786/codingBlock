#include<iostream>
using namespace std;
int main()
{
    int tr,rownum=1;
    cin>>tr;
    while(rownum<=tr)
    {
        int i=1;
        while(i<=rownum)
        {
            cout<<i;
            i++;
        }cout<<endl;
        rownum++;
    }
}