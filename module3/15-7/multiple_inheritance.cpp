//multiple inheritance

#include <iostream>
using namespace std;

class a
{
	protected:
		int no1;
		
		public:
		void get_a(int n)
		{
			no1=n;
		}
	
};

class b
{
	protected:
		int no2;
		
		public:
		void get_b(int n)
		{
			no2=n;
		}
};

class c : public a,public b
{
		
		public:
			void mul()
			{
				int ans= no1*no2;
			    cout<<"\n multiplication is :"<<ans<<endl;
			}
			
		
	
};
int main()
{
	int no1,no2;
	
	cout<<"\n Enter number 1 : ";
	cin>>no1;
	
	cout<<"\n Enter number 2 : ";
	cin>>no2;
	
	c c1=c();
	c1.get_a(no1);
	c1.get_b(no2);
	c1.mul();
	
	
	return 0;
}
