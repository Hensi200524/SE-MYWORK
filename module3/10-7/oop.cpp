#include <iostream>
using namespace std;

class Tops
{
	//data member
	public:
		int id;
		string name;
		
		//method
		void display()
		{
			cout<<"your id is: "<<id<<endl;
			cout<<"your name is: "<<name<<endl;
		
			//cout<<"id is "<<id;
			
		}
};

int main()
{
	int id;
	string name;
	
	cout<<"Enter Your Id"<<endl;
	cin>>id;
	
	cout<<"Enter Your Name"<<endl;
	cin>>name;
	
	Tops t1 = Tops();
	
	t1.id=id;
	t1.name=name;
	
	t1.display();
	return 0;
}
