#include<iostream>
using namespace std;
int main()
{
    // Pyramid 
    for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=9; c++)
        {
            if(c>=6-r && c<=4+r)
                cout<<"*";
            else
                cout<<" ";
        }
       cout<<"\n";
    }
 

    // inverted Pyramidd 
    for(int r=2; r<=5; r++)
    {
        for(int c=1; c<=9; c++)
        {
            if(c>=r && c<=10-r)
                cout<<"*";
            else
                cout<<" ";
        }
       cout<<"\n";
    }
    cout<<"\n";
}