//Accept 10 number using for loop and check no. of even numbers and odd numbers 

#include <stdio.h>
#include <conio.h>

void main()
{
	
	int no,i,odd=0,even=0;
	
	for(i=1;i<=10;i++)
	{
		printf("\n Enter number %d: ",i);
		scanf("%d",&no);
		
		if(no%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
		printf("\n  total even number is : %d",even);
		printf("\n total odd number is : %d",odd);
		
	getch();
}
