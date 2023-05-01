#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    base()  //call always first
    {
        cout<<"base Constructor"<<endl;
    }
    base(int x) //not called 
    {
        cout<<"base parameterized constructer"<<endl;
    }
};
class derived : public base
{
public:
    derived()//call second
    {
        cout<<"Derived Constructor"<<endl;
    }
    derived(int y)//called last
    {
        cout<<y<<endl;
    }
};
int main()
{
    derived d;
    derived d2(3);
}