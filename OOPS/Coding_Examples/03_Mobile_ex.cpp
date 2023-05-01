#include<bits/stdc++.h>
using namespace std;

class Mobile
{
private:
    string name;
    int RAM;
    string processor;
    int battery;
public:
    Mobile(string name_a="NULL",int RAM_a=0,string processor_a="NULL",int battery_a=0)
    {
        name = name_a;
        RAM = RAM_a;
        processor = processor_a;
        battery = battery_a;
    }
    Mobile(Mobile &mob)
    {
        name = mob.name;
        RAM = mob.RAM;
        processor = mob.processor;
        battery = mob.battery;
    }
    void getData();
};
void Mobile :: getData()       //Define Function outside of the class.
{
    cout<<"Name -> "<<name<<endl;
    cout<<"RAM -> "<<RAM<<endl;
    cout<<"processor -> "<<processor<<endl;
    cout<<"battery -> "<<battery<<endl<<endl;
}

int main()
{
    Mobile mob;
    Mobile m31("Samsung",6,"snapdragon",6000);
    Mobile m31s(m31);
    mob.getData();
    m31.getData();
    m31s.getData();
}