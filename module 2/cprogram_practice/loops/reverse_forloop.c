//C Program to Reverse a Number Using FOR Loop

#include <stdio.h>
#include <conio.h>

int main()
{
	int num,digit,reverse=0,i;
	
	printf("\n Enter any number : ");
	scanf("%d",&num);
	
	for(i=num;i!=0;i=i/10)
	{
		digit = i%10;
		reverse = reverse*10+digit;
	}
	printf("\n the reverse number is : %d",reverse);
	return 0;
}
