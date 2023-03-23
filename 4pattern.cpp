#include<iostream>
using namespace std;
int main() 
{
  int Trow, rownum=1,i,j;
  cin>>Trow;
  int count=0 , count1=0;
  
  for(rownum;rownum<=Trow; rownum++)
  {  
      j=1;
      for(j;j<=Trow-rownum;j++) // 4-1  = 3
      {
          cout<<"  ";
      }
      i=1;
      for(i;i<=2*rownum-1; i++)// 2-1=1
      {
          //cout<<i+rownum-1<<" ";
		   if (count <= rownum-1) {
                cout << i+rownum-1 << " ";
                ++count;
            }
            else {
                ++count1;
                cout << i+rownum-2*count1-1 << " ";
            }
      }count =0 ; 
	  count1 =0;
      cout<<endl;
  }
  count=0 ,count1=0 ,rownum=1;
  int tr=Trow;
  for(Trow;Trow>=1;Trow--)
  {  
      j=1;
      for(j;j<=rownum;j++) // 4-1  = 3
      {
          cout<<"  ";
      }
      i=1;
      for(i;i<=(2*(rownum-1)-1); i++)// 2-1=1
      {
          //cout<<i+rownum-1<<" ";
		   if (count <= rownum-1) {
                cout << i+rownum-1 << " ";
                ++count;
            }
            else {
                ++count1;
                cout << i+rownum-2*count1-1 << " ";
            }
      }count =0 ; 
	  count1 =0;
      rownum++;
      cout<<endl;
  }
}