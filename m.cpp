#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    for(int i=1; i<=N; i++)
    {  
        for(int j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        
        for(int k=1; k<=(2*N-2*i); k++)
        {
            cout<<"  ";
        }
        
        for(int j=i-1; j>=1; j--)
        {
            cout<<j<<" ";
        }
        
        cout<<endl;
    }
}
