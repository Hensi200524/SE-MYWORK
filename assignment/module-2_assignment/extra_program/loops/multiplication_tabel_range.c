//Allow the user to input the range of the multiplication table (e.g., from 1 to N).

#include <stdio.h>
#include <conio.h>

void main()
{
	
	int num,range,i,ans=0;
	
	printf("\n Enter an integer : ");
	scanf("%d",&num);
	
	printf("\n Enter the range : ");
	scanf("%d",&range);
	
	printf("\n Multiplication Table for %d up to %d:\n", num, range);
	
	for(i=1;i<=range;i++)
	{
		ans = num*i;
		printf("%d * %d = %d\n", num, i, ans);
	}
	getch();
}
