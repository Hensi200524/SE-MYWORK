//multiple inheritance

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

class B 
{
		public :
		void b()
		{
			cout<<"B called"<<endl;
		}	
};

class C : public A,public B
{
		public :
		void c()
		{
			cout<<"c called"<<endl;
		}	
};
int main()
{
	C c1;
	c1.a();
	c1.b();
	c1.c();
	
	return 0;
}
