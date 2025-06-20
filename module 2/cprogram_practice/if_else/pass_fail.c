//Accept marks from user and check pass or fail 

#include<stdio.h>
#include<conio.h>

void main()
{
	int marks;
	
	printf("Enter the marks : ");
	scanf("%d",&marks);
	
	if(marks > 35)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	getch();
}
