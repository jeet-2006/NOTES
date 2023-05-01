#include<bits/stdc++.h>
using namespace std;

class person    //abstract class
{
public:
    virtual void give() = 0;    //pure virtual Function
};
class Boy : public person
{
public:
    virtual void give()
    {
        cout<<"Brown Bun"<<endl;
    }
};
class Girl : public person
{
public:
    virtual void give()
    {
        cout<<"Pink Bun"<<endl;
    }
};
int main()
{
    Boy b1;
    Girl g1;
    person *pr;
    pr = &b1;
    pr->give();

    pr = &g1;
    pr->give();
}