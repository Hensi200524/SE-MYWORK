//Write a C++ program to display the multiplication table of a given number using a for loop.

#include <iostream>
using namespace std;

int main()
{
	int i,no;
	
	cout<<"Enter the Numnber : ";
	cin>>no;
	
	for(i=1;i<=10;i++)
	{
		cout << no << " x " << i << " = " << no * i << endl;
	}
	
	return 0;
}
