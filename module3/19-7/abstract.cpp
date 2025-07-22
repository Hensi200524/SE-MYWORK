//abstraction

#include <iostream>
using namespace std;

class sum
{
	private:
		int x,y,z;
		
	public:
		void add()
		{
			cout<<"\n Enter the two Numbers : ";
			cin>>x>>y;
			z = x+y;
			cout<<"\n sum of this number is : "<<z<<endl;
		}
	
};

int main()
{
	sum s1;
	s1.add();
	return 0;
}
