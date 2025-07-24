//strcpy funcation

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char name[25];
	char petname[35];
	
	cout<<"Enter the  Name: ";
	cin>>name;
	
	cout<<strcpy(petname,name)<<endl;
	cout<<petname;
}
