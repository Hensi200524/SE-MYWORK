/*Write a C++ program that defines a class Calculator with functions for addition,
subtraction, multiplication, and division. Create objects to use these functions.*/

#include <iostream>
using namespace std;

class Calculator
{
	public:
		float add(float n1,float n2)
		{
			return n1+n2;	
		}
		
		float subtract(float n1,float n2)
		{
			return n1-n2;	
		}
		
		float multiplication(float n1,float n2)
		{
			return n1*n2;	
		}
		
		float divison(float n1,float n2)
		{
			if(n2!=0)
			{
				return n1/n2;
			}
			else
			{
				cout<<"\n Not Divison"<<endl;
			}
		}	
};
int main()
{
	Calculator cal;
	
	//float num1=10,num2=6;
	
	float num1,num2;
	
	cout<<"\n Enter the Number 1 : ";
	cin>>num1;
	
	cout<<"\n Enter the Number 2 : ";
	cin>>num2;
	
	
	cout<<"\n Addition = : "<<cal.add(num1,num2)<<endl;
	cout<<"\n Subtraction = : "<<cal.subtract(num1,num2)<<endl;
	cout<<"\n Multiplication = : "<<cal.multiplication(num1,num2)<<endl;
	cout<<"\n divison = : "<<cal.divison(num1,num2)<<endl;
	return 0;
}
