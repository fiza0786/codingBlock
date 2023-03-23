#include<iostream>
using namespace std;
int main()
    {
     int tr; 
     cin>>tr;
     int rownum =1;
     while(rownum<=tr)
     {
        int i=1;
        while(i<=tr-rownum)
        {
            cout<<" ";
            i++;
        }
        int stnum =1;
        int j=1; 
        while(j<=rownum)
        {
            cout<<stnum;
            stnum++;
            j++;
        }
       stnum =stnum -2;
       int k =1;
       while(k <=rownum-1)
       {
        cout<<stnum;
        stnum--;
        k++;
       } cout<<endl;
       rownum ++;
     }
    }
