//Checking Whether You Are Eligible for Voting or Not 

#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	
	printf("Enter the age : ");
	scanf("%d",&age);
	
	if(age > 18)
	{
		printf("Eligible to vote");
	}
	else
	{
		printf(" not Eligible to vote");
	}
	getch();
}
