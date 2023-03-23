#include <iostream>
using namespace std;
void change(int* X , int* Y)
{
    *X =  10;
    *Y =  12;
}
int main()
{
    int numberA=7, numberB=11;
    cout<<"A = "<<numberA<<" B = "<<numberB;
    change(&numberA,&numberB);
    cout<<"\n After  calling  change function \n";
    cout<<"A = "<<numberA<<" B = "<<numberB;

}