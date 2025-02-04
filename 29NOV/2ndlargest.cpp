#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,7,6,3,4};
    int slarge=0, large=0;
    for(int i=0; i<5; ++i)
    {
        // larg=large;
        if(large<arr[i])
        {         
            large=arr[i];
        }
    }
    for(int i=0; i<5; ++i)
    {
        if(slarge<arr[i] && arr[i]!=large)
        {         
            slarge=arr[i];
        }
    }
    cout<<slarge;
}