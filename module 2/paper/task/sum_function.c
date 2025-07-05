//8.Write a function int square(int num) that returns the square of a number. Call this function from main().

#include <stdio.h>
#include <conio.h>

int square(int num)
{
	int ans = num*num;
}

void main()
{
	int no;
	
	printf("\n Enter the number : ");
	scanf("%d",&no);
	
	printf("\n sum = %d",square(no));
}
