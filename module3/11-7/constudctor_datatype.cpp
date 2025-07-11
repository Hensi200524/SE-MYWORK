//constuctor with no.of same argument but diffrent data type

#include <iostream>
using namespace std;

class stud
{
	public:
	stud()
	{
		cout<<"1"<<endl;
	}
	stud(int rollno)
	{
		cout<<rollno<<endl;
	}
	stud(string name)
	{
		cout<<name<<endl;
	}
};

int main()
{
	stud s1=stud();
	stud s2=stud(15);
	stud s3=stud("Henny");
 
	
	return 0;
}
