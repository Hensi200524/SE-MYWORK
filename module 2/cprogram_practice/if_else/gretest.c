//Find the Greatest Among Three Numbers


#include <stdio.h>
#include <conio.h>

void main()
{
	int n1,n2,n3,gretest;
	
	printf("Enter Three Numbers : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1 > n2 && n1 > n3)
	{
		gretest = n1;
	}
	else if(n2 > n1 && n2 > n3)
	{
		gretest = n2;
	}
	else
	{
		gretest = n3;
	}
	printf("the gretest number is : %d",gretest);
	getch();
}
