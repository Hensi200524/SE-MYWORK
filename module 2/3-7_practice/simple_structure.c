//simple structure 

#include <stdio.h>
#include <conio.h>

struct emp
{
	int id;
	double salary;
}e1;  //structure variable

void main()
{
	printf("\n Enter the Id :");
	scanf("%d",&e1.id);
	
	printf("\n Enter the Salary :");
	scanf("%lf",&e1.salary);
	
	printf("\n your id is: %d",e1.id);
	printf("\n your salary is: %lf",e1.salary);
	
	getch();
}
