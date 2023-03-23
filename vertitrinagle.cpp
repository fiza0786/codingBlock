#include<iostream>
using namespace std;
int main()
{
    int tr , rownum=1;
    cin>>tr;
    while(rownum<=tr)
    {
        //space
        int i=1;
        while(i<=tr-rownum)
        {
            cout<<"  ";
            i++;
        }
        
        int j=1;
        while(j<=rownum-1)
        {
            cout<<rownum+j-1<<" ";
            j++;
        } 
        j=rownum;
        while(j>=1)
        {
            cout<<rownum+j-1<<" ";
            j--;
        } 
        cout<<endl;
        rownum++;
    }
    rownum=tr-1;
    while(rownum>=1)
    {
        //space
        int i=1;
        while(i<=tr-rownum)
        {
            cout<<"  ";
            i++;
        }
        
        int j=1;
        while(j<=rownum-1)
        {
            cout<<rownum+j-1<<" ";
            j++;
        } 
        j=rownum;
        while(j>=1)
        {
            cout<<rownum+j-1<<" ";
            j--;
        } 
        cout<<endl;
        rownum--;
    }
    
}