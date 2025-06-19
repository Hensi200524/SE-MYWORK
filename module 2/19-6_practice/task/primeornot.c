/***Write a C program that checks whether a given number is a prime number or not using a for 
loop***/


#include <stdio.h>
#include <conio.h>

int main()
{
    int num, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Count how many times num is divisible
    for(i=1;i<=num;i++) 
	{
        if(num%i==0) 
		{
            count++;
        }
    }

    if(count==2) 
	{
        printf("%d is a Prime number.\n", num);
    } else
	{
        printf("%d is not a Prime number.\n", num);
    }

    return 0;
}

