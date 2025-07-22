/*Write a C++ program that accepts an array of integers, calculates the sum and
average, and displays the results*/

#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cout<<"\n Enter the number of element : ";
	cin>>num;
	
	int arr[num],sum=0,i;
	float avg;
	
	cout<<"\n Enter " <<num <<" elemnets : "<<endl;
	
	for(i=0;i<num;i++)
	{
		cout<<"\n element " <<i+1 << ":";
		cin>>arr[i];
		sum += arr[i];
	}
	
	avg = (float)sum/num;
	
	cout<<"\n sum = "<<sum<<endl;
	cout<<"\n average  = "<<avg<<endl;

	
	return 0;
}
