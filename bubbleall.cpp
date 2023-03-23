#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,4,1,2,3};
    int n =sizeof arr/sizeof (int);
    bool isswap;
    for(int count =1; count<=n-1; count++)
    {
         isswap=false;
    for(int j=0; j<=n-count-1; j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j], arr[j+1]);
            isswap=true;
        }
    }
    if(isswap==false)
    {
        break;
    }
    }
    
    for(int i =0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
}