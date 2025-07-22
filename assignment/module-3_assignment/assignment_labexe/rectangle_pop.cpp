/*Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task*/

#include <iostream>
using namespace std;

float rectangle(float length,float width)
{
	return length*width;
}

int main()
{
	float length,width,area;
	
	cout<<"Enter the length : ";
	cin>>length;
	
	cout<<"Enter the width : ";
	cin>>width;
	
	area = rectangle(length,width);
	cout<<"Area of rectangle is : "<<area<<endl;
	
	
	return 0;
}
