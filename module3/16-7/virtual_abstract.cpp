#include <iostream>
using namespace std;

class RBI
{
	public:
		virtual int rate() //abstract keyword - virtual
		{
			return 0;
		}
};
class SBI : public RBI
{
	public:
		int rate()
		{
			return 7;
		}
};
class ICICI : public RBI
{
	public:
		int rate()
		{
			return 8;
		}	
};
class AXIS : public RBI
{
	public:
		int rate()
		{
			return 9;
		}	
};
int main()
{
	RBI *r;//pointer object
	SBI s;
	ICICI i;
	AXIS a;
	
	r = &s;//address
	cout<<r->rate()<<endl;//vaue get arrow key
	r = &i;
	cout<<r->rate()<<endl;
	r = &a;
	cout<<r->rate()<<endl;
	
	return 0;
}
