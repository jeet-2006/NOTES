#include<bits/stdc++.h>
using namespace std;

class base
{
public:
    void Msg()
    {
        cout<<"Base class fun"<<endl;
    }
};

class derived : public base
{
public:
    void Msg()
    {
        cout<<"Derived class fun"<<endl;
        base :: Msg();
    }
};

int main()
{
    derived d;
    d.Msg();
}
