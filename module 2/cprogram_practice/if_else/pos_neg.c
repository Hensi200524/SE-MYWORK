//Check Number Is Positive or Negative 

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
	else
	{
		printf("Negative number");
	}
	getch();
}
