//Calculate person’s Annual salary

#include <stdio.h>
#include <conio.h>

int main()
{
	float month_salary,annual_salary;
	
	printf("\n Enter your monthly salary : ");
	scanf("%f",&month_salary);
	
	annual_salary = month_salary*12;
	printf("\n annual salary is : %f",annual_salary);
	return 0;
}
