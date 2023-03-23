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
    person(string name_a, int age_a, float height_a)
    {
        name =name_a;
        age=age_a;
        height=height_a;
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
    person obj, obj2("Vedinesh", 34,5.10f);
    obj.getData();
    obj2.getData();
    return 0;
}