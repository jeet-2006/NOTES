#include<bits/stdc++.h>
using namespace std;

class base
{
public:
    virtual void Msg() //Non callable Function
    {
        cout<<"base"<<endl;
    }
};

class derv1 : public base
{
public:
    void Msg()
    {
        cout<<"derv1"<<endl;
    }
};

class derv2 : public base
{
public:
    void Msg()
    {
        cout<<"derv2"<<endl;
    }
};

int main()
{
    base *ptr = new derv1();
    ptr->Msg();
    ptr = new derv2();
    ptr->Msg();
}