#include<bits/stdc++.h>
using namespace std;

class house
{
    //member variables
    int length=0,width=0;
    
    public:
    //member functions
    void setData(int x,int y)
    {
        length = x;
        width = y;
    }
    void area()
    {
        cout<<"Area is -> "<<length*width;
    }
};

int main()
{
    house h1;   //memory allocated
    h1.setData(300,400);
    h1.area();

    return 0;
}