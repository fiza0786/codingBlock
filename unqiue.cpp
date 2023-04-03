#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int no;
	cin>>no;
	int ans=no;
	int i=1;
	while(i<=n-1){
		cin>>no;
	ans=ans^no;
	i=i+1;
	}
	cout<<"unique no is "<<ans<<endl;
	return 0;
}