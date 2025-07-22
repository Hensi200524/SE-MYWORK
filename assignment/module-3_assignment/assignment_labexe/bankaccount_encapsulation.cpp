/*Create a class BankAccount with data members like balance and member functions
like deposit and withdraw. Implement encapsulation by keeping the data members
private.*/

#include <iostream>
using namespace std;

class BankAccount
{
	private:
		float balance;//encapsulate variable
		
		public:
		BankAccount(float initialbal)
		{
			if(initialbal >= 0)
			{
				balance = initialbal;
			}
			else
			{
				cout<<"Invalid Balance"<<endl;
				balance = 0;
			}
		}
		
		void deposit(float amount)
		{
			if(amount > 0)
			{
				balance += amount;
				cout<<"\n Deposit : "<<amount;
			}
			else
			{
				cout<<"\n Invalid Deposit Amount"<<endl;
			}
		}
		
		void withdraw(float amount)
		{
			if(amount > 0 && amount <= balance)
			{
				balance -= amount;
				cout<<"\n withdraw : "<<amount<<endl;
			}
			else
			{
				cout<<"\n Invalid balance for withdrawal."<<endl;
			}
		}
		
		float getvalue()
		{
			return balance;
		}
};

int main()
{
	
	BankAccount ba(1000);//inital balance = 1000
	
	ba.deposit(700); //1000+700 = 1700
	ba.withdraw(500);//1700-500 = 1200
	
	cout<<"current balance is : "<<ba.getvalue() <<endl;
	
	return 0;
}
