#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter an alphabet:-";
    cin>>a;
    if((a>='a' && a<='z')||(a>='A' && a<='Z'))
    {
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
        cout<<"Entered character is Vowel";
    }
    
    else
    {
        cout<<"Entered character is Consonent";
    }
    }
    else
    {
        cout<<"Enter alphabet only";
    }
}