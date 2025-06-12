//2 .Write a program to find out the max from given number

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, digit, max = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Convert to positive if number is negative
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;
        if (digit > max) {
            max = digit;
        }
        num = num / 10;
    }

    printf("Maximum digit: %d\n", max);

    return 0;
}

