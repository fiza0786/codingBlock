#include<iostream>
using namespace std;
void revrese(int data[],int size)
{
    for(int i =size-1 ; i>=0; i--)
    {
        cout<<data[i]<<"\n";
    }

}
int main()
{
    int n;
    int arr[1000];
    cin>>n;
    for(int i= 0; i<= n-1; i++)
    {
        cin>>arr[i];
    }
    revrese(arr,n);
    return 0;
}