/*Write a C++ program to check if a given string is a palindrome (reads the same
forwards and backwards).*/

#include <iostream>
using namespace std;

int main()
{
	string str;
	int i,len;
	bool isPalindrome= true;
	
	cout<<"Enter a String : ";
	cin>>str;
	
	len = str.length();
	
	for(i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-i-1]) 
		{
            isPalindrome = false;
            break;
        }
	}
	
	if(isPalindrome)
	{
		cout<<str<<" is a palindrome."<<endl;
	}
	else
	{
		cout<<str<<" is not a palindrome."<<endl;
	}
	return 0;
}
