/*Write a Program of Addition, Subtraction ,Multiplication and Division using
switch(Must Be Menu Driven)*/

#include <stdio.h>
#include <conio.h>

void main()
{
	int num1,num2,choice,ans;
	
	printf("\n------operation menu------\n");
	printf("\n1.Addition\n");
	printf("\n2.Subtraction\n");
	printf("\n3.Multiplication\n");
	printf("\n4.Divison\n");
	printf("\n--------------------------\n");
	
	printf("\nEnter number1 : ");
	scanf("%d",&num1);
	
	printf("\nEnter number2 : ");
	scanf("%d",&num2);
	
	printf("\nEnter choice up to 1 to 4 : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			ans = num1+num2;
			printf("\nResult : %d",ans);
			break;
			
		case 2:
			ans = num1-num2;
			printf("\nResult : %d",ans);
			break;
			
		case 3:
			ans = num1*num2;
			printf("\nResult : %d",ans);
			break;
			
		case 4:
			ans = num1/num2;
			printf("\nResult : %d",ans);
			break;
			
		default:
			printf("\nInvalid Choice.Please select number between 1 to 4");
			
	}
	getch();
}
