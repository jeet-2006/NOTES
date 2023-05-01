#include<bits/stdc++.h>
using namespace std;

class person
{
    int age;
    string name;

    public :
        person(int x = 0,string y = "NULL")  //overloaded Constructer
        {
            age = x;
            name = y;
        }

        void getData()
        {
            cout<<"age -> "<<age<<endl;
            cout<<"name -> "<<name<<endl;
        }

};

int main()
{
    person obj1,obj2(21,"JEET");
    obj1.getData();
    obj2.getData();
}