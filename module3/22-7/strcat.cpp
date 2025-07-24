//strcat funcation

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char name[25];
	char surname[35];
	
	cout<<"Enter the  Name: ";
	cin>>name;
	
	cout<<"Enter the Surame: ";
	cin>>surname;
	
	cout<<strcat(name,surname)<<endl;
}
