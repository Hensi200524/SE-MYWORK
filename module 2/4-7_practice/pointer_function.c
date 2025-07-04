//pointer with function

#include<stdio.h>
#include<conio.h>

void ptr(int *no)
{
	*no*=5;
	printf("\n %d",*no);
}

void main()
{
	int x = 10;
	ptr(&x);
	printf("\n %d",x);
	getch();
}
