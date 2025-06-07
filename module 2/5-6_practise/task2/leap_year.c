//5.Check whether a year is a leap year.


#include<stdio.h>
#include<conio.h>

void main()
{
	int years;
	
	printf("Enter Years:");
	scanf("%d",&years);
	
	if(years % 4 == 0 && years % 100 != 0)
	{
		printf("it's Leap Year \n");
	}
	else
	{
		printf("it's Not Leap Year \n");
	}
}
