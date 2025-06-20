//Count total of even number and total no. of odd numbers

#include<stdio.h>
#include<conio.h>

int main()
{
	int i,num,even=0,odd=0;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter the number %d:",i);
		scanf("%d",&num);
		
		if(num%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("\n total even number :%d",even);
	printf("\n total odd number :%d",odd);
	
	return 0;
}
