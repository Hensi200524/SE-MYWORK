/*Write a program that demonstrates the difference between local and global
variables in C++. Use functions to show scope.*/

#include <iostream>
using namespace std;

//global ariable
int globalvar= 50;

void showglobal()
{
	//Accessing global variable
	cout<<"\n inside showglobal(),globalvar = "<<globalvar<<endl;
}

void showlocal()
{
	//Local variable (same name as global variable)
	int globalvar= 100;
	cout<<"\n inside showlocal(), local globalvar = "<<globalvar<<endl;	
}

int main()
{
	//local variable in main
	int localvar = 10;
	
	cout<<"\n inside main() ,globalvar = "<<globalvar<<endl;
	cout<<"\n inside main() ,localvar = "<<localvar<<endl;
	
	showglobal();
	showlocal();
	
	return 0;
}
