/*Write a C program that takes a number as input and checks whether it is a palindrome using
a function.*/

#include <stdio.h>
#include <conio.h>

int palindrome(int num)
{
	int reverse=0,remainder;
	int original = num;
	
	while(num!=0)
	{
		remainder = num%10;
		reverse = reverse*10+remainder;
		num = num/10;
	}
		return (original == reverse);
}
int main()
{
	int number;
	
	printf("\n Enter a number : ");
	scanf("%d",&number);
	
	if(palindrome(number))
	{
		printf("\n %d is palindrome number",number);
	}
	else
	{
		printf("\n %d is not palindrome number",number);
	}
	
	
	return 0;
}
