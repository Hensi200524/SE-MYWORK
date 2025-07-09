//Convert minutes into seconds and hours  

#include <stdio.h>
#include <conio.h>

void main()
{
	int minutes,seconds,hours;
	
	printf("Enter the minutes : ");
	scanf("%d",&minutes);
	
	seconds = minutes*60;
	hours = minutes/60.0;
	
	printf("\n the seconds are : %d",seconds);
	printf("\n the hours are : %d",hours);
	getch();
}
