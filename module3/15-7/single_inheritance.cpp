//single inheritance

#include <iostream>
using namespace std;

class Accounter
{
	public:
	float bonus=5000;
};

class Programmer : public Accounter
{
	public:
	float salary=65000;
	
	void sum(float salary,float bonus)
	{
		float sum = salary+bonus;
		cout<<"sum is : "<<sum<<endl;
	}
};

int main()
{
	int s,b;
	
	cout<<"Enter the salary : ";
	cin>>s;
	
	cout<<"Enter the Bonus : ";
	cin>>b;
	
	Programmer p1;
	//cout<<"salary is "<<p1.salary<<endl;
	//cout<<"Bonus is "<<p1.bonus<<endl;
	//p1.sum(p1.salary,p1.bonus);
	p1.sum(s,b);
	
	return 0;
}
