#include<iostream>
using namespace std;
int main()
{
    // Right angle triangle at left bottom
    for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=5; c++)
        {
            if(c<=r)
                cout<<"*";
            else
                cout<<" ";
        }
       cout<<"\n";
    }
    cout<<"\n";
    cout<<"\n";

    // inverted right triangle angle at left 
     for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=5; c++)
        {
            if(c<=6-r)
                cout<<"*";
            else
                cout<<" ";
        }
       cout<<"\n";
    }
    // Right angle triangle at right
    for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=5; c++)
        {
            if(c>=6-r)
                cout<<"*";
            else
                cout<<" ";
        }
       cout<<"\n";
    }
    cout<<"\n";
    cout<<"\n";

    // inverted right angle triangle at right 
     for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=5; c++)
        {
            if(c>=r)
                cout<<"*";
            else
                cout<<" ";
        }
       cout<<"\n";
    }
}