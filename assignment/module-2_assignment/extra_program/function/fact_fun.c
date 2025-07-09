//Write a C program that calculates the factorial of a given number using a function

#include <stdio.h>
#include <conio.h>

int fact(int n)
{
	 int fact=1,i;
	
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}

int main()
{
	int num,result;
	
	printf("\n Enter the Number : ");
	scanf("%d",&num);
	
	result = fact(num);
	
	printf("\n facroial of given number is : %d",result);
	return 0;
}
