#include<iostream>
using namespace std;
int main()
 {
	int N;
	cin>>N;
    int i = N;
   
	while( i <=1)
	{
     if(i % 2 != 0)	
         {
			cout<< i;
            i --;
       }	
	}
    return 0;
 }