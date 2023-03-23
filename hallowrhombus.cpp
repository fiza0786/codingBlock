#include<iostream>
using namespace std;
int main() {
	int tr ;
	cin>>tr;
	int i =1;
	while(i<= tr-1)
	{
		cout<<" ";
		i++;
	}
    int j=1;
     while(j<=tr)
        {
            cout<<"*";
            j++;
        }cout<<endl;
    int rownum=2;
    while(rownum<=tr-1)
    {
        int k=1;
        while(k<=tr-rownum)
        {
            cout<<' ';
            k++;
        }
        cout<<'*';
        int l=1;
        while(l<=tr-2)
        {
            cout<<" ";
            l++;
        }
        cout<<"*";
        cout<<endl;
        rownum++;
    } 
    int m =1;
    while(m<=tr)
    {
        cout<<"*";
        m++;
    }   
		
	return 0;
}