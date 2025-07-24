//strcpy funcation

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char name[25]="Henny";
	char petname[35];
	
	do
	{
		cout<<"Enter the  Name: ";
		cin>>petname;
	}while(strcmp(name,petname)!=0);
	cout<<"answer is correct!";
}
