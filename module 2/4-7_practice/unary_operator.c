//unary operator

#include <stdio.h>
#include <conio.h>

int main()
{
	int a=8,b;
	
	a++;
	printf("\n %d",a);//9
	
	++a;
	printf("\n %d",a);//10
	
	b=a++;
	printf("\n %d",a);//11
	printf("\n %d",b);//10
	
	b++;
	printf("\n %d",b);//11
	
	
	return 0;
}

