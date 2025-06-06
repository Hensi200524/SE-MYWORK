//Find the largest among two numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
	int no1,no2;
	
	printf("Enter the First number:");
	scanf("%d",&no1);
	
	printf("Enter the Second number:");
	scanf("%d",&no2);
	
	if(no1>no2)
	{
		printf("The largest no is:%d",no1);
	}
	else if(no2>no1)
	{
		printf("The largest no is:%d",no2);
	}
	else{
		printf("The Number is equal");
	}
	getch();
}
