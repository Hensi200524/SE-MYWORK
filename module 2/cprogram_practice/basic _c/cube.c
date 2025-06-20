#include <stdio.h>
#include <conio.h>

int main()
{
    int number, cube;

    printf("Enter a number: ");
    scanf("%d", &number);

    cube = number * number * number;

    printf("cube of %d is %d\n", number, cube);

    return 0;
}

