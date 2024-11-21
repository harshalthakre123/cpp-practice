#include<iostream>
using namespace std;
int main()
{
    int a, b=1;
    cout<<"Enter no.";
    cin>>a;
    for(int i=0; i<3; i++)
    {
        b*=a;
        
    }
    cout<<"cube is"<<b;
}