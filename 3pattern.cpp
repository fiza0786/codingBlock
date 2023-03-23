#include<iostream>
using namespace std;
int main()
{
    int tr ,rownum =1;
    cin>>tr;
    while(rownum<=tr)
    {
        //space tr-rownum
        int i =1;
        while(i<=tr-rownum)
        {
            cout<<" ";
            i++;
        }
        int j=1;
        while(j<=rownum)
        {
            cout<<"*";
            j=j+1;
        }cout<<endl;

        rownum++;
    }
}