//call by refrence

#include <stdio.h>
#include <conio.h>


void swap(int *a, int *b)
{
	int temp=0;
	printf("\n before swap function: %d,%d",*a,*b);
	temp = *a;
	*a = *b;
	*b = temp;
	printf("\n after swap  function: %d,%d",*a,*b);
}

int main()
{
	int x,y;
	
	x=6;
	y=4;
	
	printf("\n before swap : %d,%d",x,y);
	swap(&x,&y);
	printf("\n after swap : %d,%d",x,y);
	return 0;
}
