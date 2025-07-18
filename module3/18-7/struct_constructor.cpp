//structer with constuctor

#include <iostream>
using namespace std;

struct Rectangle
{
	int h,w;
	
	Rectangle(int height,int width)
	{
		h=height;
		w=width;
	}
	
	void calculatearea()
	{
		int ans = h*w;
		cout<<"Area of Rectangle is : "<<ans<<endl;
	}
};
int main()
{
	struct Rectangle r1=Rectangle(6,8);
	struct Rectangle r2=Rectangle(4,4);
	r1.calculatearea();
	r2.calculatearea();
	
	return 0;
}
