//Modify the program to print all prime numbers between 1 and a given number.


#include <stdio.h>
#include <conio.h>

int main()
{
    int num, i, j, isPrime;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime numbers between 1 and %d are:\n", num);

    for (i = 2; i <= num; i++) // loop through all numbers from 2 to num
    {
        isPrime = 1; // assume i is prime

        for (j = 2; j < i; j++) // check if i has any divisors
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d ", i); // print the prime number
        }
    }

    return 0;
}

