//2-d array using user input

#include <stdio.h>
#include <conio.h>

void main()
{
	int marks[6];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter your marks : ");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("marks are : %d\n",marks[i]);
	}
	getch();
}
