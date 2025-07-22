//destructor

#include <iostream>
using namespace std;

class Student
{
	public:
		Student()
		{
			cout<<"\n Constructor called"<<endl;
		}
		~Student() //destructor
		{
			cout<<"\n Destructor called"<<endl;
		}
	
};

int main()
{
	Student s1;
	Student s2;
	
	return 0;
}

