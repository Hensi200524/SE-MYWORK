/*
    1
   21
  321
 4321
54321
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=(5-i);j++)
		{
			printf(" ");
		}
		for(k=i;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	getch();
}
