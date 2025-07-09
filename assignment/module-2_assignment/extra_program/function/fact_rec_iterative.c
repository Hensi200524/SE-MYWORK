/* Implement both an iterative and a recursive version of the factorial function and
compare their performance for large numbers*/

#include <stdio.h>
#include <conio.h>

// Recursive function
int fact_recursive(int n) 
{
    if(n==0 || n==1)
        return 1;
    else
        return n*fact_recursive(n-1);
}

// Iterative function
int fact_iterative(int n) 
{
    int fact=1,i;
    for(i=1;i<=n;i++) 
	{
        fact*=i;
    }
    return fact;
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("\nFactorial using recursive method: %d",fact_recursive(num));
    printf("\nFactorial using iterative method: %d\n",fact_iterative(num));

    return 0;
}

