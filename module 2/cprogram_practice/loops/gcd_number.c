//Find the GCD of Two Numbers Using Loop

#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,i,gcd;
	
	printf("\n Enter two numbers :");
	scanf("%d %d",&a,&b);
	
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	}
	printf("\n gcd of %d and %d is : %d",a,b,gcd);
	return 0;
}
