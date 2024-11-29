#include<iostream>
using namespace std;
int main()
{
    // int arr[5];
    // for(int i=0; i<5; ++i)
    // {
    //     cout<<"Enter int value";
    //     cin>>arr[i];
    // }
    // for(int i=0; i<5; ++i)
    // {
    // cout<<arr[i]<<" ";
    // }

    // 2d array
    // int arr[2][3]= {{1, 2, 3},{4, 5, 6}};
    // for(int r=0; r<5; ++r)
    // {
    //     for(int c=0; c<5; ++c)
    //     {
    //         cout<<arr[r][c]<<" ";
    //     }
    //     cout<<endl;
    // }

        // 3d array;
    int arr[3][2][2]={{{1, 2},{3, 4}},{{5, 6},{7,8}}, {{9, 10},{11, 12}}};
    for(int d=0; d<3; ++d)
    {
        for(int r=0; r<2; ++r)
        {
            for(int c=0; c<2; ++c) 
            {
                cout<<arr[d][r][c]<<" ";
            } 
            cout<<endl;
        }
    cout<<endl;
    }
}