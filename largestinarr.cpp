#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i =0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    int largest =arr[0];
    
    for(int j =1;j<=n-1; j++)
    {
    if(arr[j]>largest)
    {
        largest =arr[j];
    }
    }
    cout<<largest;
   
    return 0;
}