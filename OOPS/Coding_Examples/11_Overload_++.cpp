#include<bits/stdc++.h>
using namespace std;

class person
{
private:
    int weight;
public:
    person(int w = 0)
    {
        weight = w;
    }
    void printWeight()
    {
        cout<<"weight is -> "<<weight<<endl;
    }
    person operator ++() //Pre
    {
        ++weight;
    }
    person operator ++(int) //Post
    {
        weight++;
    }
};

int main()
{
    person p(103);
    p.printWeight();

    ++p;
    p++;

    p.printWeight();
}