#include<stdio.h>
#include<conio.h>

void main()
{
	int marks;
	
	printf("Please Enter Your Marks:");
	scanf("%d",&marks);
	
	if(marks>80)
	{
		printf("under A Grade");
	}
	else if(marks>60)
	{
		printf("under B Grade");
	}
	else if(marks>40)
	{
		printf("under C Grade");
	}
	else
	{
		printf("you are Fail");
	}
   getch();
}
