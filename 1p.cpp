#include<iostream>
using namespace std;
int main()
{
    int tr, rownum=1;
    cin>>tr;
    int val;
    if(tr%2!=0) {
        val=(tr+1)/2;  // val =3
    } else {
        val=tr/2;
    }

    while(rownum<=tr) // 5
    {
        int i=1;
        int j=1;
        if(rownum<=val) {
            while(i<=tr-rownum) {
                cout<<"  ";
                i++;
            }
            while(j<=2*rownum-1) {
                cout<<"*";
                j++;
            }
            cout<<endl;
        } 
        rownum++;
    }

    
    rownum=tr-1; // 5-1 = 4
    while(rownum>=1)
    {
        int i=1;
        int j=1;
        if(rownum<=val) {
            while(i<=tr-rownum+1) {
                cout<<"  ";
                i++;
            }
            while(j<=2*(rownum-1)-1 ){
                cout<<"*";
                j++;
            }
            cout<<endl;
        } 
        rownum--;
    }
}
