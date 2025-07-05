//7.Write a program to reverse and print the elements of a 5-element array.

#include <stdio.h>
#include <conio.h>

int main()
{
	int no[5],i;
	
	printf("\n enter element of the array");
	
	for(i=0;i<5;i++)
	{
		printf("\n enter the number %d: ",i+1);
		scanf("%d",&no[i]);
	}
	
	
	for(i=4;i>=0;i--)
	{
		printf("\n reverse =  %d",no[i]);
		
	}
	return 0;
}
