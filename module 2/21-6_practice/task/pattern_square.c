/*
1
44
999
16 16 16 16
25 25 25 25 25
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,val;
	
	for(i=1;i<=5;i++)
	{
		val = i*i;
		for(j=1;j<=i;j++)
		{
			printf("%d",val);
		}
	
		printf("\n");
	}
	getch();
}
