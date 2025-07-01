//global and local variable

#include <stdio.h>
#include <conio.h>
int main()
{
	int x=2,y=5;//global variables
	{
		int x =4;//local variables
		int y =5;
		printf("\n %d %d",x,y);
	}
	printf("\n %d %d",x,y);
	return 0;
}

