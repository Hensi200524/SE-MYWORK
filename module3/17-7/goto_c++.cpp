//goto statement in c++

#include<iostream>
using namespace std;

int main()
{
   
    int age;
cout<<"\n Enter your age : ";
cin>>age;

if(age<18)
{
    goto ineligible;
}
else
{
    goto eligible;
}

ineligible:
    cout<<"\n Not Eligible to vote"<<endl;


eligible:
    cout<<"\n Eligible to vote"<<endl;   
     return 0;
} 