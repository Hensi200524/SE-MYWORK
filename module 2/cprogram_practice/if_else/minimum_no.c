//Find the minimum Among Three Numbers


#include <stdio.h>
#include <conio.h>

void main()
{
	int n1,n2,n3,min;
	
	printf("Enter Three Numbers : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1 < n2 && n1 < n3)
	{
		min = n1;
	}
	else if(n2 < n1 && n2 < n3)
	{
		min = n2;
	}
	else
	{
		min = n3;
	}
	printf("the minimum number is : %d",min);
	getch();
}
