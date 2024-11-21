#include<iostream>
using namespace std;
int main()
{
    // cout<<"goto code \n";
    // goto skip;
    // cout<<"Harshal Thakre";
    // skip:
    // cout<<"Successfull";
    // cout<<"Statement 1 \n";
    // goto b;
    // cout<<"Statement 2 \n";
    // cout<<"Statement 3 \n";
    // b:
    // cout<<"Statement 4 \n";
    int i=1;
    start:
    cout<<2*i<<"\n";
    ++i;
    if(i<=10)
    {
        
        goto start;
    }
}