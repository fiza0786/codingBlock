#include<iostream>
#include<string>
using namespace std;
class person
{
    private:
    string name;
    int age;
    float height;
    public:
    person()
    {
        name ="Null";
        age=0;
        height = 0.0f;
    } 
    
    void getData()
    {
        cout <<endl<<"Name"<< name;
        cout<< endl<<"Age"<< age;
        cout<<endl<<"Height"<<height;
    }
};
int main()
{
    person obj;
    obj.getData();
    return 0;
}