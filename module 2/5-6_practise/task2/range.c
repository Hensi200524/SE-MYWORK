//Check if a number is within a given range (e.g., 10–50).

#include<stdio.h>
#include<conio.h>

void main()
{
	int no;
	
	printf("Enter Number:");
	scanf("%d",&no);
	
	if(no>=10 && no<=50)
	{
		printf("The number is given range");
	}
	else
	{
		printf("the number is not under given range");
	}
	getch();
	
}
