#include<iostream>
using namespace std;
int main()
{
    int n, r, num=0, a;
    cout<<"Enter any num";
    cin>>n;
    a=n;
    for( ;n>0; )
    {
        r=n%10;
        num+=(r*r*r);
        n=n/10;
    }
    cout<<num<<endl;
    if(num==a)
    {cout<<"Armstrong";
    }
    else
    {
        cout<<"not an armstrong";
        }
}