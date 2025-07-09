//Calculate sum of 10 numbers using of while loop 

#include <stdio.h>
#include <conio.h>

void main()
{
	
	int count=1,sum=0,no;
	
	while(count<=10)
	{
		printf("Enter the number %d:",count);
		scanf("%d",&no);
		
		sum+=no;
		count++;
	}
	printf("sum of the 10 number is : %d",sum);
	getch();
}
