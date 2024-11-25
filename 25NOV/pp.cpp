#include<iostream>
using namespace std;
int main()
{
    // row no print in Right angle triangle
    for(int r=1; r<=5; ++r)
    {
        int a=r;
        for(int c=1; c<=5; ++c)
        {
            if(c<=r)
            {
                cout<<a;
                a++;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}