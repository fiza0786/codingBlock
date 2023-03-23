#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
    for(int count =1; count<=n-1;count++)
    {
        for(int j=0 ; j<=n-count-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

void traverseAr(int arr[], int n)
{
   for(int i=0; i<=n-1;i++)
        {
        cout<<arr[i] <<" ";
        } 
}
//  Array insertion
void InsertionAray(int arr[],int n)
{
    for ( int i=0; i<=n-1 ; i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int arr[1000],n;
    
    cin>>n;
    InsertionAray(arr,n )
    bubblesort(arr ,n);
    traverseAr(arr, n);
    return 0;
}