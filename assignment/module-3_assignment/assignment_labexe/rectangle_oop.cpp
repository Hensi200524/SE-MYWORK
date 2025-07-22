#include <iostream>
using namespace std;

class rectangle
{
	public:
	float length,width;
	
	float calculatearea()
	{
		return length*width;
	}
	
	public:
		void display()
		{
			cout<<"the Area of Rectangle is : "<<calculatearea()<<endl;
		}
};

int main()
{
	
	//float length,width;
	rectangle r1;

	
	cout<<"Enter the length of rectangle : ";
	cin>>r1.length;
	
	cout<<"Enter the width of rectangle : ";
	cin>>r1.width;
	
		
//	r1.length=length;
//	r1.width =width;
	r1.display();
	
	return 0;
}
