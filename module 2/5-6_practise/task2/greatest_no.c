//Find the greatest among three numbers using nested if.

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("enter three numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>=b)
	{
		if(a>=c)
		{
			printf("the greatest number is %d\n",a);
		}
		else
		{
			printf("the greatest number is %d\n",c);
		}
	}
	else
	{
		if(b>=c)
		{
			printf("the greatest number is %d\n",b);
		}
		else
		{
			printf("the greatest number is %d\n",c);
		}
	}
	getch();
}
