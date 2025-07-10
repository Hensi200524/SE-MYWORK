//class and objet

#include <iostream>
using namespace std;

class Tops
{
	//data member
	public:
	int id;
	string name;
};

int main()
{
	//object
	Tops t1;
	
	t1.id=101;
	t1.name="Hensi";
	
	cout<<"your id is: "<<t1.id<<endl;
	cout<<"your name is: "<<t1.name<<endl;
	
	Tops t2;
	
	t2.id=102;
	t2.name="Divya";
	
	cout<<"your id is: "<<t2.id<<endl;
	cout<<"your name is: "<<t2.name<<endl;
	
	return 0;
}
