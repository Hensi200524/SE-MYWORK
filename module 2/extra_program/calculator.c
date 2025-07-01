#include<stdio.h>
#include<conio.h>

void main()
{
	int no1,no2;
	int add,sub,mul,divison;
	int n=5;
	
	printf("Enter the number1 : ");
	scanf("%d",&no1);
	
	printf("Enter the number2 : ");
	scanf("%d",&no2);
	
	add = no1+no2;
	printf("\n addition of %d and %d is : %d \n",no1,no2,add);
	
	sub = no1-no2;
	printf("\n subtraction of %d and %d is : %d \n",no1,no2,sub);
	
	mul = no1*no2;
	printf("\n multiplication of %d and %d is : %d \n",no1,no2,mul);
	
	divison = no1/no2;
	printf("\n divison of %d and %d is : %d \n",no1,no2,divison);
	
	
     printf("\n module is : %d",n%3);
	
	getch();
}



