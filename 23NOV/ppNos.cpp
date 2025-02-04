#include<iostream>
using namespace std;
int main()
{
    // row no print in Right angle triangle
    for(int r=1; r<=5; ++r)
    {
        for(int c=1; c<=5; ++c)
        {
            if(c<=5-r)
            {
            }
        }
        cout<<"\n";
    }
    cout<<"\n";
    // column no. print in Right angle triangle
    for(int r=1; r<=5; ++r)
    {
        for(int c=1; c<=5; ++c)
        {
            if(c<=r)
            {
                cout<<r;
            }
            else if(c>=r)
            {
                cout<<" ";
                cout<<c;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    cout<<"\n";

    // Capital Alphabets print 
    for(int r=1; r<=5; ++r)
    {
        for(int c=1; c<=5; ++c)
        {
            if(c<=r)
            {
                cout<<char(64+r);
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    cout<<"\n";

    // Capital Alphabets print 
    for(int r=1; r<=5; ++r)
    {
        for(int c=1; c<=5; ++c)
        {
            if(c<=r)
            {
                cout<<char(64+c);
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    
}