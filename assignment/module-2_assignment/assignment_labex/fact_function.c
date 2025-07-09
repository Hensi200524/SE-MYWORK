/*Write a C program that calculates the factorial of a number using a function. 
  Include function declaration, definition, and call.*/

#include <stdio.h>
#include <conio.h>

// Function declaration
int factorial(int n);

// Function definition
int factorial(int n) 
{
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num,result;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("Factorial of a negative number doesn't exist.\n");
    } 
	else
    {
        // Function call
        result = factorial(num);
        printf("Factorial of %d = %d\n", num, result);
    }

    return 0;
}
