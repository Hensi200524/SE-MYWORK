/*Write a C++ program that performs both implicit and explicit type conversions and
prints the results.*/

#include <iostream>
using namespace std;

int main()
{
	int a=5;
	float b=7.5;
	
	//implicit conversion ,int+float=float
	float sum = a+b;
	
	//explicit conversion
	int intsum=(int)b+a;
	
	cout<<"impicit conversion value of sum is : "<<sum<<endl;
	cout<<"explicit conversion value of sum is : "<<intsum<<endl;
	
	return 0;
}
