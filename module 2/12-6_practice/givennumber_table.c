//table of given number

#include <stdio.h>
#include <conio.h>

void main()
{
	int num1,num2,i,j,ans=0;
	
	printf("Enter Any Number1:");
	scanf("%d",&num1);
	
	printf("Enter Any Number2:");
	scanf("%d",&num2);
	
	printf("Table of given number is : ");
	
	for(i=1;i<=10;i++)
	{
		ans = num1*i;
		printf("\n%d * %d = %d",num1,i,ans);
	}
	
		for(j=1;j<=10;j++)
	{
		ans = num2*j;
		printf("\n%d * %d = %d",num2,j,ans);
	}
	getch();
}
