#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    for(int i=n; i>0;i--){
        for(int j=n;j>0;j--){
            if(j>=i)
                cout<<j<<" ";
            else
                cout<<"  ";
        }
            for(int j=0; j<=n; j++)
            {
                if(j<i)
                    cout<<"  ";
                else
                    cout<<j<<" ";
            }
                cout<<endl;
    }
      for(int j=n; j>=0; j--)
      cout<<j<<" ";
      for(int j=1;j<=n;j++)
      cout<<j<<" ";
      cout<<endl;

             for(int i=1;i<=n;i++){
            for(int j=n; j>=0; j--){
                if(j>=i)
                    cout<<j<<" ";
                else
                    cout<<"  ";            
           }
            for(int j=1;j<=n; j++)
            {
                if(j>=i)
                    cout<<j<<" ";
                
                else
                    cout<<"  ";
            }
                cout<<endl;
       }
    return 0;
}