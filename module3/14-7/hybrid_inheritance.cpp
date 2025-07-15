//hybrid inheritance

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

class C 
{
		public :
		void c()
		{
			cout<<"c called"<<endl;
		}	
};

class D : public B,public C
{
		public :
		void d()
		{
			cout<<"d called"<<endl;
		}	
};
int main()
{
	D d1;
	d1.a();
	d1.b();
	d1.c();
	d1.d();
	
	return 0;
}
