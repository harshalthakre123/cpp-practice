#include<iostream>
using namespace std;
int main()
{
    int u, tb=0;
    cout<<"Enter the No. of units consumed";
    cin>>u;
    //12Rs per unit
    if(u>=0 && u<=50)
    {
        tb+=(u*12);
        cout<<"Total Bill is"<<tb<<"rs only";
    }
    //15Rs per unit
    else if(u>=50 && u<=100)
    {
        tb+=(50*12)+((u-50)*15);
        cout<<"Total Bill is"<<tb<<"rs only";
    }
    //18Rs per unit
    else if(u>=100 && u<=150)
    {
        tb+=(50*12)+(50*15)+((u-100)*18);
        cout<<"Total Bill is"<<tb<<"rs only";
    }
    //20Rs per unit
    else if(u>=150 && u<=200)
    {
        tb+=(50*12)+(50*15)+(50*18)+((u-150)*20);
        cout<<"Total Bill is"<<tb<<"rs only";
    }
    else
    {
        cout<<"Please enter unit consumed between 0 to 200 \n";
    } 

}