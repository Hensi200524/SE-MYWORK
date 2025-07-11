//parameterized constuctor

#include <iostream>
using namespace std;

class stud
{
	public:
		int i;
		string n;
		
	stud(int id,string name)
	{
		i=id;
		n=name;
	}
	void display()
	{
		cout<<i<<endl;
		cout<<n<<endl;
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
