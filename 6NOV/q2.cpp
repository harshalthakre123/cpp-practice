#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any three digit no.:";
    cin>>n;
    if(n>=100 && n<1000)
    {
        cout<<"3 digit no.";
    }
    else
    {
        cout<<"not a 3 digit no.";
    }

}