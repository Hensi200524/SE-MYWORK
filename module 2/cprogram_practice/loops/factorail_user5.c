//Accept 5 numbers from user and find each numbers factorial 

#include <stdio.h>
#include <conio.h>

int main()
{
	int no,i,j,fact;
	
	for(i=1;i<=5;i++)
	{
		printf("\n Enter number %d:",i);
		scanf("%d",&no);
	
	
	fact=1;
	for(j=1;j<=no;j++)
	{
		fact*=j;	
	}
	printf("\n factorail of %d = %d",no,fact);
    }
	
	return 0;
}
