#include<bits/stdc++.h>
using namespace std;

class Person
{
    int weight;
public:
    Person(int w = 0)
    {
        weight = w;
    }
    friend bool operator < (Person x,Person y);
    friend bool operator > (Person x,Person y);
};

bool operator < (Person x,Person y)
{
    return x.weight < y.weight;
}

bool operator > (Person x,Person y)
{
    return x.weight > y.weight;
}
int main()
{
    int w1,w2;
    cout<<"Enter Weight of John:"<<endl;
    cin>>w1;
    cout<<"Enter Weight of Khali"<<endl;
    cin>>w2;

    Person John(w1);
    Person Khali(w2);

    if(John > Khali)
        cout<<"John is Heavy"<<endl;
    else if(Khali > John)
        cout<<"Khali is heavy"<<endl;
    
}