//Write a C program that stores 5 integers in a one-dimensional array and prints them.

#include<stdio.h>
#include<conio.h>

void main()
{
	int number[5],i;
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter a Number : ");
		scanf("%d",&number[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n number[%d] = %d",i,number[i]);
	}
	
	getch();
}
