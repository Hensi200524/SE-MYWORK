/*
1
12
123
1234
12345
*/

#include <stdio.h>
#include <conio.h>

void main()
{
	int num,i,j;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);	
		}
		printf("\n");
	}
	getch();
}
