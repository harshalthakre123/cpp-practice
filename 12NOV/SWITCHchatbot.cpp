#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"Enter your choice No.- \n 1.International \n 2.Domestic";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {cout<<"Enter your choice No. \n 1.Pakistan \n 2.Iran";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"2000";
            break;
            case 2:
            cout<<"14000";
            break;
            default:
            cout<<"invalid Choice";
            break;
        }
        break;
        }
        case 2:      
        {cout<<"You Have Choosed Domestic";
        cout<<"Enter your choice No.: \n 1.Goa \n 2.GujratI";
        cin>>choice;       
        switch(choice)
        {
            case 1:
            cout<<"12000";
            break;
            case 2:
            cout<<"15000";
            break;
            default:
            cout<<"invalid Choice";
            break;
        }  
        break;
        }      
    default:
    cout<<"Invalid Choice";
    break;
    }
}