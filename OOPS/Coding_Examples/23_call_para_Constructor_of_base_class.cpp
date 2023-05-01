#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    base()  //not called
    {
        cout<<"base Constructor"<<endl;
    }
    base(int x) //first called 
    {
        cout<<"base para constructer "<<x<<endl;
    }
};
class derived : public base
{
public:
    derived()//not called 
    {
        cout<<"Derived Constructor"<<endl;
    }
    derived(int y) : base(y)//called last
    {
        cout<<"Derived para constructor "<<y<<endl;
    }
};
int main()
{
    derived d(10);
}