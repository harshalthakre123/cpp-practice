#include<iostream>
using namespace std;
int main()
{
    int income;
    cout<<"Enter your Annual Income:-";
    cin>>income;
    if(income<=100000)
    {
        cout<<"No need to pay tax";
    }
    else if(income>=100000 && income<=500000)
    {
        cout<<(income*10)/100<<"Tax is Payable";
    }
    else if(income>=500000 && income<=1000000)
    {
        cout<<(income*20)/100<<"Tax is Payable";
    }
    else
    {
        cout<<(income*40)/100<<"Tax is Payable";
    }
}