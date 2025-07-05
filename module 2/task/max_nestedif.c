//3Write a program to find the maximum of three numbers using nested if-else.

#include <stdio.h>
#include <conio.h>

void main()
{
	int n1,n2,n3;
	
	printf("\n Enter the three numbers : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("\n %d is max num",n1);
		}
		else
		{
			printf("\n %d is max num",n3);
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("\n %d is max num",n2);
		}
		else
		{
			printf("\n %d is max num",n3);
		}
	}
	getch();
}
