//Method overloading with same method same parameter but diffrent datatype

#include <iostream>
using namespace std;

class cal
{
	public:
	int count(int a,int b)
	{
		return a+b;
	}
	
	float count(double c,double d)
	{
		return c*d;
	}
	
};

int main()
{
	cal c1;
	cout<<c1.count(3,7)<<endl;
	cout<<c1.count(3.0,2.5)<<endl;
	
	return 0;
}
