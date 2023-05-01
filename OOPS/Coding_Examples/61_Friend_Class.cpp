#include<bits/stdc++.h>
using namespace std;

class A
{
    int a1;
public:
    A(int arg = 0)
    {
        a1 = arg;
    }
    friend class B;
};
class B
{
    int b1;
public:
    B(int arg = 0)
    {
        b1 = arg;
    }

    void sum()
    {
        A a(5);
        int sum = a.a1 + b1;
        cout<<"sum is ->"<<sum<<endl; 
    }
};
int main()
{
    B b2(9);
    b2.sum();
}