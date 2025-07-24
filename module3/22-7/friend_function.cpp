//friend function

#include <iostream>
using namespace std;

class myclass
{
	friend class secondclass;//friend 
	private:
		int secret;
		
	public:
		myclass() : secret(0)
    {
        
    } 
		void printmember()
		{
			cout<<secret<<endl;
		}
};

class secondclass
{
	public:
		void change(myclass& yourclass,int x)
		{
			yourclass.secret = x;
		}
	
};

int main()
{
	myclass m1;
	secondclass s2;
	
	m1.printmember();
	s2.change(m1,10);
	m1.printmember();
	
	return 0;
}
