
#include<iostream>
using namespace std;
int main ()
{
	int tr ;
	cin>> tr;
	int rownum=1;
	while(tr>=1)
	{
		int i=1;
        int j=1;
        while(j<=rownum-1)
        {
            cout<<' ';
            j++;
        }
		while(i<=tr)
		{                                     
			cout<<"* ";
            i++;
		}cout<<endl;
		tr--;
		rownum++;
	}

	return 0;
}