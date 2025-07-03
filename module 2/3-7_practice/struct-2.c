//simple structure to store diffrent data type 

#include <stdio.h>
#include <conio.h>

struct details
{
	char name[50];
	double salary;
	int rollno;
	float height;
}d1;  //structure variable

void main()
{
	printf("\n Enter the Name :");
	scanf("%s",&d1.name);
	
	printf("\n Enter the Salary :");
	scanf("%lf",&d1.salary);
	
	printf("\n Enter the rollno :");
	scanf("%d",&d1.rollno);
	
	printf("\n Enter the height :");
	scanf("%f",&d1.height);
	
	printf("\n name is : %s",d1.name);
	printf("\n salary is : %lf",d1.salary);
	printf("\n rollno is : %d",d1.rollno);
	printf("\n height is : %f",d1.height);
	
	
	
	getch();
}
