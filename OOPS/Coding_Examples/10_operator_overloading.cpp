#include<bits/stdc++.h>
using namespace std;

class A
{
private:
    int weight;
public:
    A(int x = 0)
    {
        weight = x;
    }
    void printValue()
    {
        cout<<"Weight is -> "<<weight<<endl;
    }
    A operator + (A w)
    {
        A temp;
        temp.weight = weight + w.weight;
        return temp;
    }
};
int main()
{
    int a = 3,b = 5,c=0;
    c = a + b;
    cout<<"Total -> "<<c<<endl;
    A person1(100);
    A person2(90);
    A total;
    total = person1 + person2;
    total.printValue();
}