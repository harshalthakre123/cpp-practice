#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any no. between 1 to 5:-";
    cin>>n;
    if(n>1 && n<5)
    {
        cout<<n;
    }
    else
    {
        cout<<"Enter in given range";
    }
}