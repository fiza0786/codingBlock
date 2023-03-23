#include<iostream>
#include<string>
using namespace std;
// class
class house
{
    private:
   // member variable 
   int length =0 , breath=0;
   // member function
   public: 
   void setData(int x , int y)
   {
    length =x;
    breath =y;
   }
   void area()
   {
       cout  << "Area of house"<<length*breath;
   }

};
int main(){
    house gini;
    gini.setData(300,500);
    gini.area();
    return 0;
}