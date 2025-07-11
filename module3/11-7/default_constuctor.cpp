//defult constructor

#include <iostream>
using namespace std;

class constructor
{
	public:
	constructor()
	{
		cout<<"default Constuctor called."<<endl;	
	}	
};

int main()
{
	constructor c1=constructor();
	c1.constuctor();	
	return 0;
}

