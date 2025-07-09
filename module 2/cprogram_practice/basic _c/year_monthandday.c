//Convert years into days and months 

#include <stdio.h>
#include <conio.h>

void main()
{
	int year,month,days;
	
	printf("Enter the number of year : ");
	scanf("%d",&year);
	
	month = year*12;
	days = year*365;
	
	printf("\n the month is : %d",month);
	printf("\n the days is : %d",days);
	getch();
}
