#include<iostream>
using namespace std;
int main()
{
    int tr , rownum=1 ;
    cin>>tr;
    while(tr>=rownum)
    {
        int i=1;
        while(i<=tr-rownum+1)
        {
            cout<<i ;

            i++;
        }
       int j=1;
       while(j<=2*(rownum-1)-1)
       {
    
        cout<<"*";
        j++;
       }cout<<endl;
        rownum ++;
    
    }
}