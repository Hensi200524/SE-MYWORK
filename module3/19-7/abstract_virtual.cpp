//abstract 

#include <iostream>
using namespace std;

class shape
{
	public:
	virtual void draw()=0;	
};

class Rectangle : public shape
{
	public:
		void draw()
		{
			cout<<"\n Rectangle Drawing...."<<endl;
		}
	
};

class Traingle : public shape
{
	public:
		void draw()
		{
			cout<<"\n Traingle Drawing...."<<endl;
		}
};

int main()
{
	Rectangle rec;
	Traingle tri;
	
	rec.draw();
	tri.draw(); 
	return 0;
}
