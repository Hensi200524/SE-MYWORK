//Count total sum of positive number and total no. of negative numbers 

#include <stdio.h>
#include <conio.h>

int main()
{
	int n1,n2,n3,n4,n5;
	int positive_sum=0,negative_count=0;
	
	printf("Enter number 1 : ");
	scanf("%d",&n1);
	
	if(n1>0)
	{
		positive_sum+=n1;
	}
    else if(n1<0)
	{
		 negative_count++;
	}
	
	printf("Enter number 2 : ");
	scanf("%d",&n2);
	
	if(n2>0)
	{
		positive_sum+=n2;
	}
    else if(n2<0)
	{
		 negative_count++;
	}
	
	printf("Enter number 3 : ");
	scanf("%d",&n3);
	
	if(n3>0)
	{
		positive_sum+=n3;
	}
    else if(n3<0)
	{
		 negative_count++;
	}
	
	printf("Enter number 4 : ");
	scanf("%d",&n4);
	
	if(n4>0)
	{
		positive_sum+=n4;
	}
    else if(n4<0)
	{
		 negative_count++;
	}
	
	printf("Enter number 5 : ");
	scanf("%d",&n5);
	
	if(n5>0)
	{
		positive_sum+=n5;
	}
    else if(n5<0)
	{
		 negative_count++;
	}
	
	printf("\nTotal sum of positive numbers: %d", positive_sum);
    printf("\nTotal number of negative numbers: %d", negative_count);
	
	return 0;
}
