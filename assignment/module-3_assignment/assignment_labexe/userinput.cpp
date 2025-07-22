/*Write a C++ program that accepts user input for their name and age and then
displays a personalized greeting.*/

#include <iostream>
#include <string>
using namespace std;


int main()
{
	string name;
	int age;
	
	cout<<"\n Enter your name : ";
	cin>>name;
	
	cout<<"\n Enter your age : ";
	cin>>age;
	
	cout<<"my name is "<<name <<"."<< "i am " <<age <<" years old.";
	
	
	return 0;
}

