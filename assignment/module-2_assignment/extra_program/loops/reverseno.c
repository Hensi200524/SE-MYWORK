//1. Write a program to print the number in reverse order.


#include <stdio.h>
#include <conio.h>

void main()
{
	int num,rem,reverse=0;
	
	printf("Enter any number : ");
	scanf("%d",&num);

	while( num!=0)
	{
		rem=num%10;
		reverse=reverse*10+rem;
		num=num/10;
	}
	printf("Reverse number: %d\n", reverse);
	getch();
}
