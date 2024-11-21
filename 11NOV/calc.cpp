#include<iostream>
using namespace std;
int main()
{
    char op ;
    int a, b;
    cout<<"Enter any operator(+, -, *, /, %)";
    cin>>op;
    cout<<"Enter no. 1:";
    cin>>a;
    cout<<"Enter no. 2:";
    cin>>b;
    switch(op)
    {
        case '+': cout<<a+b;
        break;
        case '-': cout<<a-b;
        break;
        case '*': cout<<a*b;
        break;
        case '/': cout<<a/b;
        break;
        case '%': cout<<a%b;
        break;
        default : cout<<"invalid input";
        break;
         
    }
}