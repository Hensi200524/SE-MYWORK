//multileval inheritance

#include <iostream>
using namespace std;

class Animal
{
	public:
		void run()
		{
			cout<<"animal is running"<<endl;
		}
	
};

class cat : public Animal
{
	public:
		void eat()
		{
			cout<<"cat is eating"<<endl;
		}
};

class babycat : public cat
{
	public:
		void sleep()
		{
			cout<<"babycat is sleeping"<<endl;
		}
};

int main()
{
	babycat b1;
	b1.run();
	b1.eat();
	b1.sleep();
	
	return 0;
}
