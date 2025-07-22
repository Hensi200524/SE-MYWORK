/*Write a C++ program that defines a class Calculator with functions for addition,
subtraction, multiplication, and division. Create objects to use these functions.*/

#include <iostream>
using namespace std;

class calculator
{
	public:
		int add(int a,int b)
		{
			return a+b;
		}
		
		int sub(int a,int b)
		{
			return a-b;
		}
		
		int mul(int a,int b)
		{
			return a*b;
		}
		
		int div(int a,int b)
		{
			if(b!=0)
			return a/b;
		}
	
};

int main()
{
	
	int num1,num2,result;
	char op;
	calculator c1;
	
	cout<<"\n Enter two numbers : ";
	cin>>num1>>num2;
	
	cout<<"\n Enter operator (+,-,*,,/) :";
	cin>>op;
	
	if(op == '+')
	{
		result = c1.add(num1,num2);
		cout<<"\n Result = "<<result<<endl;
	}
	else if(op == '-')
	{
		result = c1.sub(num1,num2);
		cout<<"\n Result = "<<result<<endl;
	}
	else if(op == '*')
	{
		result = c1.mul(num1,num2);
		cout<<"\n Result = "<<result<<endl;
	}
	else if(op == '-')
	{
		if(num2!=0)
		result = c1.div(num1,num2);
		cout<<"\n Result = "<<result<<endl;
	}
	else
	{
		cout<<"\n please enter valid operator.";
	}
	return 0;
}
