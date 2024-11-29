#include<iostream>
using namespace std;
int main()
{
    // sum of all elements
    int arr[]={1, 2, 3, 4, 5};
    int sum=0, large=arr[0];
    // int sum=0;
    // for(int i=0; i<5; ++i)
    // {
    //     sum=sum+ arr[i];
    // }
    // cout<<sum;

    // find Largest array element
    for(int i=0; i<5; ++i)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    cout<<large;

    // int arr[3][3][3]={{{11, 22, 33},{33, 22, 11},{1, 2, 3}}, {{44, 55, 66},{66, 55, 44},{4, 5, 6}},{{77, 88, 99},{99, 88, 77},{7, 8, 9}}};
    // for(int d=0; d<3; ++d)
    // {
    //     for(int r=0; r<3; ++r)
    //     {
    //         for(int c=0; c<3; ++c)
    //         {
    //             cout<<arr[d][r][c]<<" ";           
    //         }
    //         cout<<endl;
    //     }
    //     cout<<endl;
    // }

    // cout<<arr[1][1][2];



}