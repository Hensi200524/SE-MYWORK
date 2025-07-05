/*Write a program to input two numbers and print their sum, difference, multiplication, 
and division.*/

#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,sum,diff,mul,div;
	
	printf("\n Enter the value of a and b :");
	scanf("%d %d",&a,&b);

	sum=a+b;
	printf("\n sum of : %d",sum);
	
	diff=a-b;
	printf("\n diffrence of : %d",diff);
	
	mul=a*b;
	printf("\n Multiplication of : %d",mul);
	
	
	div=a/b;
	printf("\n divison of : %d",div);
	
	
	getch();
}
