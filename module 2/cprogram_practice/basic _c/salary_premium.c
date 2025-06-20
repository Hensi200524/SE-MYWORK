//Calculate person’s insurance premium based on salary 

#include<stdio.h>
#include<conio.h>

void main()
{
	float salary,premium;
	
	printf("\nEnter the salary : ");
	scanf("%f",&salary);
	
	if(salary<10000)
	{
		premium = salary*0.05;
	}
	else if(salary<=50000)
	{
		premium = salary*0.10;	
	}
	else
	{
		premium = salary*0.15;
	}
	
	printf("\nyour insurance premium is : %f",premium);
	
	getch();
}
