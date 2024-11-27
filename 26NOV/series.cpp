#include<iostream>
using namespace std;
int main()
{
    int n=0, sum=0;
    for(int i=1 ; i<=5; ++i )
    {
        n=n*10+1;     
        cout<<n<<" ";
        sum+=n;
    }
    cout<<sum;
    
}