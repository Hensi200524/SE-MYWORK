//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3) 

#include <stdio.h>
#include <conio.h>

int main() {
    int num, square, cube;

    printf("Enter an integer: ");
    scanf("%d",&num);

    // Calculate powers
    square = num*num;       // N^2
    cube = num*num*num;   // N^3

    // Output results
    printf("N^1 = %d\n", num);
    printf("N^2 = %d\n", square);
    printf("N^3 = %d\n", cube);

    return 0;
}

