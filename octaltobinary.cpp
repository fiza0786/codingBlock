#include<iostream>
#include<math.h>
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
int decToBinary(int num)
{
    int re =0;
    int binary=0;
    while(num !=0)
    {
        re=num%2;
        binary=binary*10+re;
        num=num/2;
    }
    binary=revrse(binary);
    return binary;
}
int octTodecimal(int num)
{
    int re =0;
    int i=0,decimal=0;
    while(num!=0)
    {
        re=num%10;
        decimal=decimal+pow(8,i)*re;
        num =num/10;
        i++;
    }
        return decToBinary(decimal);
}
int main()
{
    int num ;
    cin>>num;
    cout<<octTodecimal(num);
    

}