/*Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int num= 10;
	int *ptr;
	
	ptr=&num;
	
	printf("\n original value of num : %d",num);
	
	*ptr = 25;
	
	printf("\n modified value of num : %d",num);
	return 0;
}
