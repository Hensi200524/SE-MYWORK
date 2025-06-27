//with para with return type 

#include <stdio.h>
#include <conio.h>

//make function
int cal(int a,int b)
{
	return a+b;
}

void main()
{
	printf("\n %d",cal(24,5));//call function
	printf("\n %d",cal(5,5));
	printf("\n %d",cal(3,7));
	printf("\n %d",cal(7,8));
	getch();
}
