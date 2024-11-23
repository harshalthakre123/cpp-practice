#include<iostream>
using namespace std;
int main()
{
    //Diamond from 3 loops
    for(int r=1; r<=9; ++r)
    {
        if(r<=5)
        {
        for(int c=1; c<=9; ++c)
        {
            if(c>=6-r && c<=4+r)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        }
        else
        {
        for(int c=1; c<=8; ++c)
        {
            if(c>=-4+r && c<=14-r)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        }
        cout<<"\n";
    }
    
}