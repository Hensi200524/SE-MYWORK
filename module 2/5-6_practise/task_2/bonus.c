//Assign bonus to employees based on years of service.

#include<stdio.h>
#include<conio.h>

void main()
{
	int years;
	
	printf("Enter the year of service : ");
	scanf("%d",&years);
	
	if(years>7)
	{
		printf("bonus : 10,000 ");
	}
	else if(years>6)
	{
		printf("bonus : 8,000 ");
	}
	else if(years>5)
	{
		printf("bonus : 6,000 ");
	}
	else if(years>4)
	{
		printf("bonus : 4,000 ");
	}
	else
	{
		printf("No Bonus");
	}
	getch();
}
