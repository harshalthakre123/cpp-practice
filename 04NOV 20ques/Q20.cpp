#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter two numbers";
    cin>>num1>>num2;
    if(num1+num2==9||num1-num2==9||num1/num2==9||num1*num2==9||num1%num2==9)
    {
        cout<<"Ans is 9";
    }
    else
    {
        cout<<"Ans is not 9";
    }
}