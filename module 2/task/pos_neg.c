//9.Write a program to input a number and check whether it is positive, negative, or zero using if-else.

#include <stdio.h>
#include <conio.h>

void main()
{
	int no;
	
	printf("\n Enter the number : ");
	scanf("%d",&no);
	
	if(no>0)
	{
		printf("\n %d is positive number",no);
	}
	else if(no == 0)
	{
		printf("\n zero");
	}
	else
	{
		printf("\n %d is Negative number",no);
	}
	getch();
}
