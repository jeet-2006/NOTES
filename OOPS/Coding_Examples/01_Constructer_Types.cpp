#include<bits/stdc++.h>
using namespace std;

class person
{
    int age;
    string name;

    public :
        person()    //Non-Parameterized Constructer
        {
            age = 24;
            name = "jay";
        }

        person(int x,string y)  //Parameterized Constructer
        {
            age = x;
            name = y;
        }

        person(person &obj2)    //Copy Constructer
        {
            age = obj2.age;
            name = obj2.name;
        }

        void getData()
        {
            cout<<"age -> "<<age<<endl;
            cout<<"name -> "<<name<<endl;
        }

};

int main()
{
    person obj1,obj2(21,"JEET"),obj3(obj2);
    obj1.getData();
    obj2.getData();
    obj3.getData();
}