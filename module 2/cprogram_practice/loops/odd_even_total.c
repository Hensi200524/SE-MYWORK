//Calculate 5 numbers from user and calculate number of even and odd using of while loop 

#include<stdio.h>
#include<conio.h>

int main()
{
	int no,i=1;
	int even=0,odd=0;
	
	while(i<=5)
	{
		printf("Enter number %d :",i);
		scanf("%d",&no);
		
		if(no%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		i++;
	}
	
	printf("\n total even number is %d",even);
	printf("\n total odd number is %d",odd);
	
	
	return 0;
}

