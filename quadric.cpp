#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    float r1,r2,des,d;
    des =(b*b)-4*a*c;
    d=2*a;
    if(des>0)
    {
        cout<<"Real and Distinct"<<endl ;
        r1=(-b - sqrt(des))/d;
        r2=(-b + sqrt(des))/d;
        cout<<r1<<"  "<<r2;
    }
    else if(des==0)
    {
        cout<<"Real and Equal";
        r1=-b/d;
        r2=r1;
        cout<<r1<<"  "<<r2;
    }
    else{
        cout<<"Imaginary ";
    }
}