/*Modify the program to calculate the Nth Fibonacci number using both iterative
and recursive methods. Compare their efficiency.*/

#include <stdio.h>
#include <conio.h>

//Recursive function
int fibonacci_recursive(int n) 
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci_recursive(n-1)+fibonacci_recursive(n-2);
}

// Iterative function 
int fibonacci_iterative(int n) 
{
    int a=0,b=1,temp,i;

    if(n==0)
        return a;

	//itrative means loop to calculate 
    for(i=2;i<=n;i++) 
	{
        temp=a+b;
        a=b;
        b=temp;
    }
    return b;
}

int main() 
{
    int num;

    printf("Enter the Number : ");
    scanf("%d",&num);

    printf("Fibonacci using recursion: %d\n",fibonacci_recursive(num));
    printf("Fibonacci using iteration: %d\n", fibonacci_iterative(num));

    return 0;
}

