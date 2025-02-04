#include<iostream>
using namespace std;
int main()
{
    int a, b, ans, lcm;
    cout<<"Enter any two no.";
    cin>>a>>b;
    // HCF-----------
    if(a>b)
    {
        for(int i=1; i<=b; i++)
        {if(a%i==0 && b%i==0)
        {
            ans=i;
        }
        }
        cout<<ans<<"HCF"<<endl;
        lcm=(a*b)/ans;
        cout<<lcm;
    }
    else if(a<b)
    {
        for(int i=1; i<=a; i++)
        {if(a%i==0 && b%i==0)
        {
            ans=i;
        }
        }
        cout<<ans<<"HCF"<<endl;
        lcm=(a*b)/ans;
        cout<<"LCM is"<<lcm;

    }
    else
    {
        cout<<"HCF and LCM is"<<a<<endl;
    }
}