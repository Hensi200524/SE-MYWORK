//Program of Armstrong Number in C Using While Loop.

#include <stdio.h>
#include <conio.h>

int main()
{
	int num,original,rem,result=0;
	
	printf("\n Enter any number : ");
	scanf("%d",&num);
	
	original = num;
	
	while(num != 0)
	{
		rem=num%10;
		result+=rem*rem*rem;
		num=num/10;
	}
	
	if(result==original)
	{
		printf("\n %d is armstrong number",original);
	}
	else
	{
		printf("\n %d is  not armstrong number",original);
	}
	return 0;
}
