#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the month no. from 1 to 12:-";
    cin>>m;
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        cout<<"31 Days";
    }
    else if(m==4||m==6||m==9||m==11)
    {
        cout<<"30 Days";
    }
    else if(m==2)
    {
        cout<<"28/29 Days";
    }
    else
    {
        cout<<"Enter the correct Month no.";
    }
}