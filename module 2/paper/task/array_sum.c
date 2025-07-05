//6.	Write a program to input 5 numbers into an array and print the sum of all numbers


#include <stdio.h>
#include <conio.h>

void main()
{
	int i,sum=0;
	int no[5];
	
	for(i=0;i<5;i++)
	{
		printf("\n enter the number %d",i+1);
		scanf("%d",&no[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum+=no[i];
	}
	printf("\n sum = %d",sum);
	
	
	
	getch();
}
