//static keyword

#include <iostream>
using namespace std;

class Bank
{
    public:
     static int count;
    string name = "";
    int accno=0;

    Bank(int accno,string name)
    {
        this->accno=accno;
        this->name=name;
        count++;
        cout<<"Total Accounts are : "<<count<<endl;
    }
};

int Bank :: count=0;

int main()
{
    Bank b1 = Bank(101,"Hensi");
    Bank b2 = Bank(102,"Divya");
    Bank b3 = Bank(101,"Mahek");
    return 0;
}