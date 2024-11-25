#include<iostream>
using namespace std;
int main()
{
    int i, a1=0, a2=1, a3, n;
    cout<<"Enter the no. of terms";
    cin>>n;
    // for(int i=1; i<=n; ++i)
    // {
    //     if(i==1)
    //     {
    //         cout<<a1<<" ";
    //         continue;
    //     }
    //     if(i==2)
    //     {
    //         cout<<a2<<" ";
    //         continue;
    //     }
    //     a3=a1+a2;
    //     a1=a2;
    //     a2=a3;
    //     cout<<a3<<" ";
    // }
    while(i<=n)
    {
        if(i==0)
        {
            cout<<i<<" ";
            i++;
            continue;
        }
        if(i==1)
        {
            cout<<i<<" ";
            i++;
            continue;
        }
        a3=a1+a2;
        a1=a2;
        a2=a3;
        cout<<a3<<" ";
        i++;
    }
}