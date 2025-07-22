//Write a C++ program that calculates the factorial of a number using recursion.

#include <iostream>
using namespace std;

//recursion method
int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);//recursive call
	}
}

int main()
{
	int num,result;
	
	cout<<"\n Enter the Number : ";
	cin>>num;
	
	if(num<0)
	{
		cout<<"\n not possible to factorail."<<endl;
	}
	else
	{
		result = factorial(num);
		cout<<"\n factorail of "<<num <<" is: "<<result<<endl;
	}
	return 0;
}
