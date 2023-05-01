#include<bits/stdc++.h>
using namespace std;

class Alpha
{
    int a;
    int b;
public:
    Alpha(int x=0,int y=0)
    {
        a = x;
        b = y;
        stat++;
    }
    static int stat;
};
int Alpha::stat = 0;

int main()
{
    Alpha a1;
    Alpha a2;

    cout<<"stat value using a1 ->"<<a1.stat<<endl;
    cout<<"stat value using a2 ->"<<a2.stat<<endl;
    cout<<"stat value using class ->"<<Alpha::stat<<endl;

}