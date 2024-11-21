#include<iostream>
using namespace std;
int main()
{
    int price;
    cout<<"Enter product price";
    cin>>price;
    if(price>=500)
    {
        cout<<"after 20 percent discount price is Rs"<<price-(price*20/100); 
    }
    else if(price>=300 && price<500) 
    {
        cout<<"after 15 percent price is Rs"<<price-(price*15/100); 
    }
    else if(price>=100 && price<300)
    {
        cout<<"after 10 percent price is Rs"<<price-(price*10/100); 
    }
    else
    {
        cout<<"No Discount is Applied below Rs 100";
    }
}