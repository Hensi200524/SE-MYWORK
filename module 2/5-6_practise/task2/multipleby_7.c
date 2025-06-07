//Check if a number is a multiple of 7.

#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	
	printf("Enter any number:");
	scanf("%d",&num);
	
	if(num % 7 == 0){
		printf("%d is multiple of 7",num);
	}
	else
	{
		printf("%d is not multiple of 7",num);
	}
	getch();
}
