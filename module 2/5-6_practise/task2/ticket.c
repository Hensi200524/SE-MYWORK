//Assign ticket price based on age (child, adult, senior).

#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	int price;
	
	printf("Enter Age:");
	scanf("%d",&age);
	
	if(age<=12)
	{
		price = 50;
		printf("child ticket:%d",price);
	}
	else if(age<= 64))
	{
		price = 100;
		printf("adult ticket:%d",price);
	}
	else
	{
		price =150;
		printf("senior ticket:%d",price);
	}
	getch();
	
}
