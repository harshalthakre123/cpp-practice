#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter time in hour";
    cin>>t;
    switch(t/12)
    {
        case 0: cout<<"AM";
        break;
        case 1: cout<<"PM";
        break;
        default: cout<<"Invalid Input";
    }
}