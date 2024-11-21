#include<iostream>
using namespace std;
int main()
{
    int i=0, j=0;
    if(i++ == j++)// compares (0==0) then assign i=1, j=1.
    cout<<i--<<j--;
    else
    cout<<i<<j;
return 0;
}

//Output= 11