#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any no.";
    cin>>a;
    ((a%7==0) && (a%11==0))? cout<<"divisible by both": cout<<"not divisible by both";
    return 0;
}