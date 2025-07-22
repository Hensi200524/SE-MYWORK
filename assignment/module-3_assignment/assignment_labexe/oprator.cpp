/***Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
operators. Perform operations using each type of operator and display the results.***/

#include <iostream>
using namespace std;

int main()
{
	int a=10,b=4;
	cout<<"======arithmetic operatopr"<<endl;
	cout<<"a+b = "<<a+b<<endl;
	cout<<"a-b = "<<a-b<<endl;
	cout<<"a*b = "<<a*b<<endl;
	cout<<"a/b = "<<a/b<<endl;
	cout<<"a%b = "<<a%b<<endl;
	
	cout<<"======relational operatopr"<<endl;
	cout<<"a>b = "<<(a>b)<<endl;
	cout<<"a<b = "<<(a<b)<<endl;
	cout<<"a>=b = "<<(a>=b)<<endl;
	cout<<"a<=b = "<<(a<=b)<<endl;
	cout<<"a==b = "<<(a==b)<<endl;
	cout<<"a!=b = "<<(a!=b)<<endl;
	
	cout<<"======Logical operatopr"<<endl;
	cout<<"a&&b = "<<(a&&b)<<endl;
	cout<<"a||b = "<<(a||b)<<endl;
	cout<<"!b = "<<(!b)<<endl;
	
	cout<<"======Bitwise operatopr"<<endl;
	cout << "a & b = "<<(a & b)<<endl;   // AND
    cout << "a | b = "<<(a | b)<<endl;   // OR
    cout << "a ^ b = "<<(a ^ b)<<endl;   // XOR
    cout << "~a = " <<(~a)<< endl;         // NOT
    cout << "a << 1 = "<<(a << 1)<<endl; // Left shift
    cout << "a >> 1 = "<<(a >> 1)<<endl; // Right shift
	
	return 0;
}
