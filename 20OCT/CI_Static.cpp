#include<iostream>
using namespace std;
int main()
{
    int mp=2000, cp=1200, sp=1600, tb;
    if(sp>cp)
    {
        cout<<"Profit of"<<sp-cp<<"\n";
    }
    else if(sp<cp)
    {
        cout<<"Loss of"<<(cp-sp)<<"\n";
    }
    else if(sp==cp)
    {
        cout<<"Neither Profit Nor Loss";
    }
    else
    {
        cout<<"Invalid Condition";
    }
    tb=sp+(sp*15/100);
    cout<<"Total Bill is"<<tb;
}