#include<iostream>
using namespace std;
int main()
{
    int unit;
    float tb;
    cout<<"Enter unit consumed:-";
    cin>>unit;
    if(unit>=0 && unit<=50)
    {
        tb=unit*.50;
    }
    else if(unit>50 && unit<=150)
    {
        tb=(50*.50)+((unit-50)*.75);
    }
    else if(unit>150 && unit<=250)
    {
        tb=(50*.50)+(100*.75)+((unit-150)*1.20);
    }
    else if(unit>250)
    {
        tb=(50*.50)+(100*.75)+(100*1.20)+((unit-250)*1.5);
    }
    else
    {
        cout<<"Wrong input";
    }
    cout<<"Total Bill is "<<tb+(tb*20/100);
}
