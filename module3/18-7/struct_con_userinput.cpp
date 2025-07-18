//structer with constuctor with user input

#include <iostream>
using namespace std;

struct Rectangle
{
	int height,width;
	
	Rectangle(int height,int width)
	{
		this->height=height;
		this->width=width;
		
	}
	
	void calculatearea()
	{
		int ans = height*width;
		cout<<"Area of Rectangle is : "<<ans<<endl;
	}
};
int main()
{
	int h,w,h1,w1;
	
	
		cout<<"\n Enter the Height : ";
		cin>>h;
	
		cout<<"\n Enter the Width : ";
		cin>>w;
		
		cout<<"\n Enter the Height : ";
		cin>>h1;
	
		cout<<"\n Enter the Width : ";
		cin>>w1;

	
	struct Rectangle r1=Rectangle(h,w);
	struct Rectangle r2=Rectangle(h1,w1);
	r1.calculatearea();
	r2.calculatearea();
	
	return 0;
}
