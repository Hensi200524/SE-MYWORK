/*Write a program that implements inheritance using a base class Person and derived
classes Student and Teacher. Demonstrate reusability through inheritance.*/

#include <iostream>
using namespace std;

class person
{
	protected:
	string name;
	int age;
	
	public:
	void setperson(string n,int a)
	{
		name = n;
		age = a;	
	}
	
	void display()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;	
	}	
};

class teacher : public person
{
	private:
	string course;
	
	public:
	void setteacher(string n,int a,string c)
	{
		setperson(n,a);//reuse base class
		course = c;	
	}
	
	void teacherdisplay()
	{
		display();
		cout<<"course : "<<course<<endl;
		
	}	
};

class student : public person
{
	private:
	string subject;
	
	public:
	void setstudent(string n,int a,string s)
	{
		setperson(n,a);//reuse base class
		subject = s;	
	}
	
	void studentdisplay()
	{
		display();
		cout<<"subject : "<<subject<<endl;
		
	}	
};


int main()
{
	teacher t1;
	t1.setteacher("Hensi",21,"BCA");
	cout<<"------show Teacher Detaied------"<<endl;
	t1.teacherdisplay();
	
	cout<<endl;
	
	
	student s1;
	s1.setstudent("Khusbu",15,"Computer Fundamental");
	cout<<"------show students Detaied------"<<endl;
	s1.studentdisplay();
	
	cout<<endl;
	return 0;
}

