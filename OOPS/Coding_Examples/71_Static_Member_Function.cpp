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
        
    }
    static int stat;

    static int get()
    {
        stat++;
        return stat;
    }
};
int Alpha::stat = 0;

int main()
{
    cout<<"using class Name -> "<<Alpha :: get()<<endl;
    Alpha a1;
    Alpha a2;

    cout<<"stat value using a1 ->"<<a1.get()<<endl;
    cout<<"stat value using a2 ->"<<a2.get()<<endl;
    

}