#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"*"; 
    for(int space=1; space<=n-2; space++)
    {
        cout<<" ";
    }
      for(int star=1; star<=n; star++)
   {
    cout<<"*";
   }
   cout<<endl;
   for(int row =1; row<=n-2; row =row+1) 
   {
    cout<<"*";
   for(int space =1; space<=n-2; space++)
   {
    cout<<" ";
   }
   cout<<"*";
   cout<<endl;
   }
      for(int star=1; star<=2*n-1; star++)
   {
    cout<<"*";
   }
  cout<<endl;
  //lower
    for(int row =1; row<=n-2; row ++) 
   {
      for(int space =1; space<=n-1; space++)
      {
       cout<<" ";
      }
      cout<<"*";
     for(int space=1; space<=n-2; space++)
     {
      cout<<" ";
     }
     cout<<"*";
     cout<<endl;
    }
    //last 
   for(int star=1; star<=n; star++)
   {
    cout<<"*";
   }
   for(int space=1; space<=n-2; space++)
   {
    cout<<" ";
   }
   cout<<"*";
   return 0;
}