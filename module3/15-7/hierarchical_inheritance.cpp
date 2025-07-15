//hierarchical inheritance

#include <iostream>
using namespace std;

class shape
{
	protected:
		int a,b;
		
		public:
			void getval(int a1,int b1)
			{
				a=a1;
				b=b1;
			}
	
};

class rect : public shape
{
	public:
	void rarea()
	{
		int area=a*b;
		cout<<"\n area of rectangle is : "<<area<<endl;
		}	
};

class tri : public shape
{
	public:
	void tarea()
	{
		int area=0.5*a*b;
		cout<<"\n area of Traingle is : "<<area<<endl;
		}	
};

int main()
{
	int a,b;
	
	cout<<"\n Enter the value of a : ";
	cin>>a;
	
	cout<<"\n Enter the value of b : ";
	cin>>b;
	
	rect r1;
	tri t1;
	
	r1.getval(a,b);
	r1.rarea();
	t1.getval(a,b);
	t1.tarea();
	return 0;
}
