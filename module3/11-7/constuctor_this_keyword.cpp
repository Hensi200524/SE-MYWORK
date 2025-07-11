//parameterized constuctor with same variable name,use this keyword

#include <iostream>
using namespace std;

class stud
{
	public:
		int id;
		string name;
		
	stud(int id,string name)
	{
		this->id=id;//refrence(global variable call)
		this->name=name;
	}
	void display()
	{
		cout<<id<<endl;
		cout<<name<<endl;
	}	
};

int main()
{
	stud s1 = stud(1,"Hensi");
	stud s2 = stud(2,"Divya");
	
	s1.display();
	s2.display();
	
	
	return 0;
}
