#include<iostream>
using namespace std;
int main() 
{
  int row=1,col=1,trow=4;
  int tcol=trow;
  
  
  for(row=trow;row>=1;row--) // 4
  {
	// cout<<row;
	
	for(col =1; col<=row ; col++) // col 1<= 3
	{
		cout<<"*"; // * * * *
		           // * * *
	}
	cout<<"\n";
  }
  
  for(row=1;row<=trow;row++)
  {
	// cout<<row;
	
	for(col =1; col<=row ; col++)
	{	
		if(row>=2)
		cout<<"*";
	}
	cout<<"\n";
  }

  return 0;
}