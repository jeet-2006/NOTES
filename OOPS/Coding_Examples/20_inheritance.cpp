#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    void area()
    {
        cout<<"Area of Rectangle is -> "<<length*breadth<<endl;
    }
};
class cuboid : public Rectangle
{
public:
    int height;

    void volume()
    {
        cout<<"Volume of Cuboid is -> "<<length*breadth*height<<endl;
    }
};
int main()
{
    cuboid c;
    c.length = 20;c.breadth = 15;c.height = 30;

    c.area();
    c.volume();
}