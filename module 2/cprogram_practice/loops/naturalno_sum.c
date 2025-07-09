//Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
#include<conio.h>

int main()
{
	int num,i=1,sum=0;
	
	printf("\n Enter a number : ");
	scanf("%d",&num);
	
	while(i<=num)
	{
		sum+=i;
		i++;
	}
	
	printf("\n Sum of first %d natural numbers is:%d\n",num,sum);
	return 0;
}
