#include<iostream>
using namespace std;
int main()
{
    int a, d, n, term;
    cout<<"Enter the value of a(first term)";
    cin>>a;
    cout<<"Enter the value of d(Difference between)";
    cin>>d;
    cout<<"Enter the value of d(last term)";
    cin>>n;
    for(int i=0; i<=n-1; ++i)
    {
        term= a +i*d;
        cout<<term<<" ";
    }
}