#include<iostream>
using namespace std;
int main() 
{
	int num1, num2,lcm=0;
	cin>>num1>>num2;
    int gcd;
	if(num1>num2)
	{
		lcm =num1;
        
	}
	else
	{
		lcm=num2;
        
	}
	while(true)
	{
		if(lcm % num1==0 and lcm%num2==0)
		{
			cout<<lcm;
			break;
		}lcm++;
	}
    for(int i=1; i<=num1 and i<=num2; i++)
    {
        if(num1%i==0 and num2%i==0)
        {
            gcd =i;
        }
    }
        cout<<gcd<<endl;
		cout<<lcm<<endl;
	return 0;
}