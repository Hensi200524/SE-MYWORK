/*Write a program of to find out the Area of Triangle, Rectangle and Circle
using If Condition.(Must Be Menu Driven)*/

#include <stdio.h>
#include <conio.h>

void main()
{
	int choice;
	float base,height,width,length,radius,area;
	
	printf("\n-------calculator Area---------\n");
	printf("\n1.Area of Triangle\n");
	printf("\n1.Area of Rectangle\n");
	printf("\n1.Area of Circle\n");
	printf("\n----------------\n");
	
	printf("\nEnter your choice (1-3): ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("\nEnter the base and height of triangle : ");
		scanf("%f %f",&base,&height);
		
		area = 0.5*base*height;
		printf("\nthe area of traingle is : %f",area);
	}
	
	if(choice==2)
	{
		printf("\nEnter the width and length of rectangle : ");
		scanf("%f %f",&width,&length);
		
		area = width*length;
		printf("\nthe area of rectangle is : %f",area);
	}
	
	if(choice==3)
	{
		printf("\nEnter the radius : ");
		scanf("%f",&radius);
		
		area = 3.14*radius*radius;
		printf("\nthe area of circle is : %f",area);
	}
	
	if(choice<1 || choice>3)
	{
		printf("\nInvalid Choice");
	}
	
	
	getch();
	
}
