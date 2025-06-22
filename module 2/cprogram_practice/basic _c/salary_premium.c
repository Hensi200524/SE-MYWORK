//Calculate person’s insurance premium based on salary 

#include<stdio.h>
#include<conio.h>

void main()
{
	float salary,premium;
	
	printf("\n Enter the salary : ");
	scanf("%f",&salary);
	
	if(salary<10000)
	{
		premium = salary*0.05;//5%
	}
	else if(salary<=50000)
	{
		premium = salary*0.10; //10%
	}
	else
	{
		premium = salary*0.15; //15%
	}
	
	printf("\n your insurance premium is : %f",premium);
	
	getch();
}
