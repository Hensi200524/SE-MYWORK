#include<stdio.h>
#include<conio.h>

void main()
{
	int usernum;
	int luckynum=33;
	
	printf("Enter the Number :");
	scanf("%d",&usernum);
	
	if(usernum == luckynum)
	{
		printf("you are winner");
	}
	else
	{
		printf("you are Looser");
	}
	getch();
}
