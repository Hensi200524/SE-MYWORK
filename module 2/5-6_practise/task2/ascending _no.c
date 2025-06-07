#include <stdio.h>

int main() 
{
    int a, b, c;
    int first, second, third;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);//User Input

    // Nested if to sort in ascending order
    if (a <= b) {
        if (a <= c) {
            first = a;
            if (b <= c) {
                second = b;
                third = c;
            } else {
                second = c;
                third = b;
            }
        } else {
            first = c;
            second = a;
            third = b;
        }
    } else {
        if (b <= c) {
            first = b;
            if (a <= c) {
                second = a;
                third = c;
            } else {
                second = c;
                third = a;
            }
        } else {
            first = c;
            second = b;
            third = a;
        }
    }

    // Output in ascending order
    printf("Numbers in ascending order: %d, %d, %d\n", first, second, third);

    return 0;
}