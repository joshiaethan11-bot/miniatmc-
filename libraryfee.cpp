#include<iostream>
using namespace std;

int main()
{
    int days;
    cout<<"Enter the number of days:";
    cin>>days;
    if(days>0 && days<=5)
    {
        cout<<"\nPer Day Fine Amount is : 0.50 ";
        cout<<"\nTotal Fine Amount is : "<<days*0.50;
    }
    else  if(days>=6 && days<=10)
    {
        cout<<"\nPer Day Fine Amount is : 1 ";
        cout<<"\nTotal Fine Amount is : "<<days*1;
    }
     else  if(days>10 && days<=30)
    {
        cout<<"\nPer Day Fine Amount is : 5 ";
        cout<<"\nTotal Fine Amount is : "<<days*5;
    }
    else
    {
        cout<<"\nMembership will be cancelled.";
    }
    return 0;
}