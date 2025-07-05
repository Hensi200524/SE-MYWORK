//2.Write a program to check whether a number is even or odd using if-else

#include <stdio.h>
#include <conio.h>

void main()
{
	int no;
	
	printf("\n Enter the number : ");
	scanf("%d",&no);
	
	if(no>0)
	{
		printf("\n %d is even number",no);
	}
	else
	{
		printf("\n %d is odd number",no);
	}
	getch();
}
