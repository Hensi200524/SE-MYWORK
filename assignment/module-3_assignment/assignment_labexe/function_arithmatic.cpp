/*Write a C++ program that defines functions for basic arithmetic operations (add,
subtract, multiply, divide). The main function should call these based on user input.*/

#include<iostream>
using namespace std;

float add(float a,float b)
{
	return a+b;
}

float sub(float a,float b)
{
	return a-b;
}

float mul(float a,float b)
{
	return a*b;
}

float div(float a,float b)
{
	if(b!=0)
	return a/b;
	else
	cout<<"Eroor."<<endl;
}

int main()
{
	float num1,num2,result;
	char op;
	
	cout<<"\n Enter Number1 : ";
	cin>>num1;
	
	cout<<"\n Enter Number2 : ";
	cin>>num2;
	
	cout<<"\n Enter an operator (+,-,*,/) : ";
	cin>>op;
	
	switch(op)
	{
		case '+' :
			result = add(num1,num2);
			cout<<"\n Result : "<<result<<endl;
			break;
			
		case '-' :
			result = sub(num1,num2);
			cout<<"\n Result : "<<result<<endl;
			break;
			
		case '*' :
			result = mul(num1,num2);
			cout<<"\n Result : "<<result<<endl;
			break;
			
		case '/' :
			result = div(num1,num2);
			if(num2 != 0)
			cout<<"\n Result : "<<result<<endl;
			break;
			
		default:
			cout<<"\n Invalid Opeartor.";
	}
	
	return 0;
}
