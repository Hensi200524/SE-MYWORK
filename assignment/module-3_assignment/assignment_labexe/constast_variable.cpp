/*Write a C++ program that demonstrates the use of variables and constants. Create
variables of different data types and perform operations on them*/

#include <iostream>
using namespace std;

int main()
{
	int age=21;
	string name= "Hensi";
	float height=5.9;
	char grade='A';
	
	const float pi = 3.14;
	
	cout<<"\n age : "<<age;
	cout<<"\n name : "<<name;
	cout<<"\n height : "<<height;
	cout<<"\n grade : "<<grade;
	cout<<"\n PI : "<<pi<<endl;
	
	// Perform some operations
    int nextYearAge = age + 1;
    float circleCircumference = 2 * pi * height;
	
	 cout << "Next year,age will be: " << nextYearAge << endl;
    cout << "Circumference of a circle with radius " << height << ": " << circleCircumference << endl; 
	
	return 0;
}
