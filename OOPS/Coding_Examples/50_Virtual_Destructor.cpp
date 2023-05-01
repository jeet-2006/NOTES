#include<bits/stdc++.h>
using namespace std;

class base
{
public:
    virtual ~base()
    {
        cout<<"base Deleted"<<endl;
    }
};
class derived : public base
{
    ~derived()
    {
        cout<<"Derived Deleted"<<endl;
    }
};
int main()
{
    base *ptr = new derived();
    delete ptr;
}