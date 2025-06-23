//2 .Write a program to find out the min from given number

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, digit, min = 9;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Convert to positive if number is negative
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;
        if (digit < min) {
             min = digit;
        }
        num = num / 10;
    }

    printf("Minimum digit: %d\n", min);

    return 0;
}

