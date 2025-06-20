//Count total sum of even number and total no. of odd numbers

#include<stdio.h>
#include<conio.h>

int main()
{
	int i,num,even_sum=0,odd_sum=0;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter the number %d:",i);
		scanf("%d",&num);
		
		if(num%2==0)
		{
			even_sum+=num;
		}
		else
		{
			odd_sum+=num;
		}
	}
	printf("\n total sum even number :%d",even_sum);
	printf("\n total sum odd number :%d",odd_sum);
	
	return 0;
}
