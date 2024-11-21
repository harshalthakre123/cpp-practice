#include<iostream>
using namespace std;
int main()
{
    int cp, sp;
    cout<<"Enter the cost price and selling price respectively:-";
    cin>>cp>>sp;
    if(cp>sp)
    {
        cout<<"loss of"<<cp-sp;
    }
    else if(sp>cp)
    {
        cout<<"profit of"<<sp-cp;
    }
    else if(sp=cp)
    {
        cout<<"No Profit no Loss";
    }
    else
    {
        cout<<"Invalid Entry";
    }
}