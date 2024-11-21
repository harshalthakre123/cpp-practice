#include<iostream>
using namespace std;
int main()
{
    int a, sum=0;
    cout<<"Enter any no";
    cin>>a;
    for(int i=1; i<a; i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    } 
     if(sum==a)
    {
        cout<<"it is an Perfect no.";
    }
    else
    {
        cout<<"not an perfect no.";
    }
}