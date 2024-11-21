#include<iostream>
using namespace std;
int main()
{
    int n, rev=0, r, num;
    cout<<"Enter any no.";
    cin>>n;
    num=n;
    for( ; n>0;56 )
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;     
    }
    cout<<rev<<endl;
   
//    palindrome
if(num==rev)
{
    cout<<"Palindrome";
}
else
{
    cout<<"Not Palindrome";
}
   
   
    // while(n>0)
    // {
    //     r=n%10;
    //     rev=rev*10+r;
    //     n=n/10;
    // }
    // cout<<rev;
}