/* Write a C++ program that takes a student’s marks as input and calculates the grade
based on if-else conditions.*/

#include <iostream>
using namespace std;

int main()
{
	int marks;
	
	cout<<"Enter the marks : ";
	cin>>marks;
	
	if(marks >=90)
	{
		cout<<"A grade"<<endl;
	}
	else if(marks >=80)
	{
		cout<<"B grade"<<endl;
	}
	else if(marks >=70)
	{
		cout<<"C grade"<<endl;
	}
	else if(marks >=60)
	{
		cout<<"D grade"<<endl;
	}
	else if(marks >=50)
	{
		cout<<"E grade"<<endl;
	}
	else
	{
		cout<<"Fail"<<endl;
	}
	return 0;
}
