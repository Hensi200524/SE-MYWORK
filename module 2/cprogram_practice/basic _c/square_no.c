//Accept number and find out square of that value 

#include<stdio.h>
#include<conio.h>

void main()
{
	int num,square;
	
	printf("Enter the number :");
	scanf("%d",&num);
	
	square = num*num;
	printf("the number of square is : %d",square);
	getch();
}
