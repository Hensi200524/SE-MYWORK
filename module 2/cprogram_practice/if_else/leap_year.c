//Your year is leap year or not

#include <stdio.h>
#include <conio.h>

void main()
{
	int year;
	
	printf("Enter the year : ");
	scanf("%d",&year);
	
	if(num%4 == 0)
	{
		printf("leap year");
	}
	else
	{
		printf("not leap year");
	}
	getch();
}
