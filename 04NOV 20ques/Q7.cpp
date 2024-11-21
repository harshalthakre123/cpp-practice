#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter any character:-";
    cin>>c;
    if(c>='A' && c<='Z')
    {
        cout<<"Alphabet is in Uppercase";
    }
    else if(c>='a' && c<='z')
    {
        cout<<"Alphabet is in Lowercase";
    }
    else
    {
        cout<<"Wrong input";
    }
}