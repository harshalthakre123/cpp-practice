#include<iostream>
using namespace std;
int main()
{
    int amount, note;
    cout<<"Enter the amount:-";
    cin>>amount;
    if(amount>=500)
    {note=0;
    note=amount/500; 
    amount=amount%500;
    cout<<"500 notes"<<note<<endl;
    }
    goto skip;
    if(amount>=100)
    {note=0;
    note+=amount/100;
    amount=amount%100;
    cout<<"100 notes"<<note<<endl;
    }
    skip:
    if(amount>=50)
    {note=0;
    note+=amount/50;
    amount=amount%50;
    cout<<"50 notes"<<note<<endl;
    }
    if(amount>=20)
    {note=0;
    note+=amount/20;
    amount=amount%20;
    cout<<"20 notes"<<note<<endl;
    }
    if(amount>=10)
    {note=0;
    note+=amount/10;
    amount=amount%10;
    cout<<"10 notes"<<note<<endl;
    }
    if(amount>=5)
    {note=0;
    note+=amount/5;
    amount=amount%5;
    cout<<"5 notes"<<note<<endl;
    }
    if(amount>=2)
    {note=0;
    note+=amount/2;
    amount=amount%2;
    cout<<"2 notes"<<note<<endl;
    }
    if(amount>=1)
    {note=0;
    note+=amount/1;
    amount=amount%1;
    cout<<"1 notes"<<note<<endl;
    }

}