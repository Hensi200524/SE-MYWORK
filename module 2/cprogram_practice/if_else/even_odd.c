//Checking Number Is Even or Odd 

#include <stdio.h>
#include <conio.h>

void main()
{
	int num;
	
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	if(num%2 == 0)
	{
		printf("even number");
	}
	else
	{
		printf("odd number");
	}
	getch();
}
