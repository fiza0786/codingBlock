#include<iostream>
using namespace std;
int main()
{
int tr , rownum=1;

cin>>tr;
while(rownum<=tr)
{  
    
    int i=1;
    while(i<=tr)
    {   
        
        if(i<=rownum)
        cout<<rownum;
        else
        cout<<i;
       
        i++;
    
    }cout<<endl;
    rownum++;
}
}