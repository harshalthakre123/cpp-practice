#include<iostream>
using namespace std;
int main()
{
    int mp, cp, sp, tb;
    cout<<"Enter Market Price of Product:";cin>>mp;
    cout<<"Enter Cost Price of Product:";cin>>cp;
    cout<<"Enter Selling Price of Product:";cin>>sp;
    if(sp>cp)fcv 
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