#include<iostream>
using namespace std;
int revrse(int n)
{
  int re,Revnum=0;
  while(n!=0)
  {
    re=n%10;
    Revnum=Revnum*10 +re;
    n=n/10;
  }
  return Revnum;
}
int octal(int num)
{int sum = 0;
  int re=0;
   while(num !=0) 
    {
      re =num%8; 
      sum=sum*10 +re;
      num=num/8;
    }
    sum=revrse(sum);
    return sum;
}
int main()
{
    int num ;
    cin>>num;
    cout<<octal(num);      
    return 0;
}