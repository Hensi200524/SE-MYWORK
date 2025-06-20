/* Accept monthly salary from the user and deduct 10% insurance
premium , 10% loan installment find out of remaining salary. */

#include <stdio.h>
#include <conio.h>

void main()
{
	float salary,insurance,loan,remaining_salary;
	
	printf("\nEnter your monthly salary : ");
	scanf("%f",&salary);
	
	insurance = salary*0.10;
	loan = salary*0.10;
	remaining_salary = salary-insurance-loan;
	
	printf("\n insurance is : %f",insurance);
	printf("\n loan is : %f",loan);
	printf("\n reamaining salary is : %f",remaining_salary);
	getch();
}
