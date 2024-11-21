#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any three digit no.:-";
    cin>>n;
    if(n>=100 && n<1000)
    {
        int fn=n%10;
        n=n/10;
        int mn=n%10;
        int ln=n/10;
        cout<<fn<<mn<<ln;
    }
    else
    {
        cout<<"wrong input";
    }
}