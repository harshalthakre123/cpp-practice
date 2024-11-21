#include<iostream>
using namespace std;
int main()
{
    int a, count=0;
    cout<<"Enter any no;:-";
    cin>>a;
    for(int i=1;i<=a; i++)
    {
        if(a%i==0)
        {count++;}
    }
    if(count==2)
    {
        cout<<"it is an Prime no.";
    }
    else
    {
        cout<<"not an prime no.";
    }
}