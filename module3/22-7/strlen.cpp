//strlen funcation

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char name[25];
	string surname;
	
	cout<<"Enter the full Name: ";
	cin>>name;
	
	cout<<"Length of Name is : "<<strlen(name)<<endl;
}
