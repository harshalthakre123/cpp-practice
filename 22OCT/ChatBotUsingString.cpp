#include<iostream>
using namespace std;
int main()
{
    string choice;
    cout<<"Enter your choice \n 1.International \n 2.Domestic";
    cin>>choice;
    if(choice=="international")
    {
        cout<<"Enter your choice \n 1.Pakistan \n 2.Iran";
        cin>>choice;
        if(choice=="pakistan")
        {
            cout<<"2000";
        }
        else if(choice=="iran")
        {
            cout<<"15000";
        }
        else
        {
            cout<<"invalid Choice";
        }
    }
    else if(choice=="domestic")
    {
        cout<<"You Have Choosed Domestic";
        cout<<"Enter your choice \n 1.Goa \n 2.GujratI";
        cin>>choice;       
        if(choice=="goa")
        {
            cout<<"12000";
        }
        else if(choice=="gujrat")
        {
            cout<<"150000";
        }
        else
        {
            cout<<"invalid Choice";
        }        

    }
    else
    {
        cout<<"Invalid Choice";
    }
}