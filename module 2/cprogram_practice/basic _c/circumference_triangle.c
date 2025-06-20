//Find circumference of Triangle formula : triangle = a + b + c 

#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,c,triangle;
	
	printf("\nEnter the side a : ");
	scanf("%d",&a);
	
	printf("\nEnter the side b : ");
	scanf("%d",&b);
	
	printf("\nEnter the side c : ");
	scanf("%d",&c);
	
	triangle = a+b+c;
	
	printf("\ncircumference of triangle is : %d",triangle);
	
	
	getch();
}
