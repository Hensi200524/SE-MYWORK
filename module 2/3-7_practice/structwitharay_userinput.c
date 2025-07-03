//simple structure with array  to user input

#include <stdio.h>
#include <conio.h>

struct details
{
	char name[50];
	double salary;
	int rollno;
	float height;
}d1[50];  //structure variable

void main()
{
	int i,n;
	
	printf("\n total number of student :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	printf("\n Enter the Name :");
	scanf("%s",&d1[i].name);
	
	printf("\n Enter the Salary :");
	scanf("%lf",&d1[i].salary);
	
	printf("\n Enter the rollno :");
	scanf("%d",&d1[i].rollno);
	
	printf("\n Enter the height :");
	scanf("%f",&d1[i].height);
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
	printf("\n name is : %s",d1[i].name);
	printf("\n salary is : %lf",d1[i].salary);
	printf("\n rollno is : %d",d1[i].rollno);
	printf("\n height is : %f",d1[i].height);
	}
	
	
	
	getch();
}
