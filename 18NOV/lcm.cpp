#include<iostream>
using namespace std;
int main()
{
    int a, b, ans;
    cout<<"Enter any two no.";
    cin>>a>>b;
    if(a>b)
    {
        for(int i=a; ; i=i+a)
        {
            if(i%a==0 && i%b==0)
            {
                ans=i;
                break;
            }
        }
        cout<<ans;
       
    }
    else if(a<b)
    {
               for(int i=b; ; i=i+b)
        {
               if(i%a==0 && i%b==0)
            {
                ans=i;
                break;
            }
        }
        cout<<ans;
        

    }
}