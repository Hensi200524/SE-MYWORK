#include <stdio.h>
#include <conio.h>

int main()
{
    int number, square;

    printf("Enter a number: ");
    scanf("%d", &number);

    square = number * number;

    printf("Square of %d is %d\n", number, square);

    return 0;
}

