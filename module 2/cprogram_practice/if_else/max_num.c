//Find maximum in 2 variable 

#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b;
	
	printf("\n Enter two Number : ");
	scanf("%d %d",&a,&b);
	
	if(a > b)
	{
		printf("%d is maximum number",a);
	}
	else
	{
		printf("%d is a maximum number",b);
	}
	return 0;
}
