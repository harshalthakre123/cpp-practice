#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter any Character:-";
    cin>>c;
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        cout<<"Entered Character is Alphabet";
    }
    else
    {
        cout<<"Entered character is not an alphabet";
    }

}