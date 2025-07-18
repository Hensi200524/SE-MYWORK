//structer

#include <iostream>
using namespace std;

struct Rectangle
{
	 float width,height;	
};

int main()
{
	struct Rectangle rect;
	
	rect.width=8.7;
	rect.height=5.5;
	
	cout<<"Area of Rectangle is : "<<rect.width*rect.height<<endl;
	return 0;
}
