#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    base()  //derived class can only call Default Constructor if it is not specified in it.
    {
        cout<<"base Constructor"<<endl;
    }
    base(int x) //not called by derived class
    {
        cout<<"bas parameterized constructer"<<endl;
    }
};
class derived : public base
{

};
int main()
{
    derived d;
}