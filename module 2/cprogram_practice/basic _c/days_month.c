//Convert days into months 

#include <stdio.h>
#include <conio.h>

void main()
{
	int days;
	float month;
	
	printf("Enter the days : ");
	scanf("%d",&days);
	
	month = days/30.44;
	
	printf("month is : %f",month);
	getch();
}
