//Check Number Is Positive or Negative or zero

#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	
	printf("Enter the Number : ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("positive number");
	}
	else if(num == 0)
	{
		printf("zero");
	}
	else
	{
		printf("Negative number");
	}
	getch();
}
