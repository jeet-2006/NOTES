#include<bits/stdc++.h>
using namespace std;

class alpha
{
    int a1;
public:
    alpha(int arg=0)
    {
        a1 = arg;
    }
    friend void fun();
};
class beta
{
    int b1;
public:
    beta(int arg=0)
    {
        b1 = arg;
    }
    friend void fun();
};
void fun()
{
    alpha a(4);
    beta b(8);

    int x = a.a1 + b.b1;
    cout<<"sum is ->"<<x<<endl;
}
int main()
{
    fun();
    return 0;
}