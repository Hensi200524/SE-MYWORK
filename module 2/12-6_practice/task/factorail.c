//4.Find the Factorial of Given number.

#include <stdio.h>
#include <conio.h>

void main()
{
    int num, i,fact = 1;

    printf("Enter any number: ");
    scanf("%d", &num);

    if(num < 0)
	{
        printf("Factorial is not possible for negative numbers.\n");
    } 
	else 
	{
        for(i = 1; i <= num; i++) 
		{
            fact = fact * i;
        }
        printf("Factorial of %d is: %d\n", num, fact);
    }

    getch();
}

