#include<iostream>
using namespace std;
int main()
{
    

    while(true)
    {   
        char valchar;
        cin>>valchar;
        if(valchar=='+')
        {
            cout<<"Addition\n";
        }
        else if(valchar=='*')
        {
            cout<<"Multiplication\n";

        }

        if(valchar=='x' or valchar == 'X')
        {
            cout<<"Exiting...... programmm\n";
        }
    }
    return 0;
}