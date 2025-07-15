//hierarchical inheritance

#include <iostream>
using namespace std;

class A
{
	public :
		void a()
		{
			cout<<"A called"<<endl;
		}
	
};

class B : public A 
{
		public :
		void b()
		{
			cout<<"B called"<<endl;
		}	
};

class C : public A
{
		public :
		void c()
		{
			cout<<"c called"<<endl;
		}	
};
int main()
{
	B b1;
	C c1;
	b1.a();
	b1.b();
	
	
	c1.a();
	c1.c();
	
	return 0;
}
