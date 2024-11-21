#include<iostream>
using namespace std;
int main()
{
    int f=1, a;
    cout<<"Enter any no.";
    cin>>a;

    for(int i=a; i>1; i--)
    {
        f*=i;       
    }
    cout<<f;
}