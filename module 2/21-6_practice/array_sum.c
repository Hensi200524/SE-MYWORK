//2-d array using user input and find sum and average

#include <stdio.h>
#include <conio.h>

void main()
{
	int marks[6];
	int i,sum=0,avg;
	
	for(i=0;i<6;i++)
	{
		printf("Enter your marks : ");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<6;i++)
	{
		sum+=marks[i];
		
	}
	printf("sum are : %d\n",sum);
	avg=sum/6;
	printf("average are : %d\n",avg);
	getch();
}
