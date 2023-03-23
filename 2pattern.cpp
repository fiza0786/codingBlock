#include<iostream>
using namespace std;
int main()
{
    int row=1,col=1,trow;
    cin>>trow ;
  int tcol=trow;
     for(row=1;row<=trow;row++)
  {
	// cout<<row;
	
	for(col =1; col<=row ; col++)
	{	
		
		cout<<"*";
	}
	cout<<"\n";
  }

  return 0;
}