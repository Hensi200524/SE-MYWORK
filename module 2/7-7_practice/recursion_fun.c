#include <stdio.h>
#include <conio.h>

// Recursive function to calculate factorial
int fact(int n) 
{
    // Base case: Factorial of 0 or 1 is 1
    if(n==0 || n==1) 
    {
        return 1;
    } 
    // Recursive case: n * factorial(n-1)
    else 
     {
        return n*fact(n-1);
    }
}

int main() 
{
    int num;
    printf("\n Enter a number: ");
    scanf("%d",&num);

    if(num<0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
  else 
    {
        int result = fact(num);
        printf("Factorial of %d is %d\n",num,result);
    }

    return 0;
}
