#include <stdio.h>
#include <conio.h>

void main() {
    int no1, no2, result;
    char operator;

    printf("Enter number1: ");
    scanf("%d", &no1);

    printf("Enter number2: ");
    scanf("%d", &no2);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // Note: space before %c to ignore leftover newline

    switch (operator) {
        case '+':
            result = no1 + no2;
            printf("\nAddition of %d and %d is: %d\n", no1, no2, result);
            break;
        case '-':
            result = no1 - no2;
            printf("\nSubtraction of %d and %d is: %d\n", no1, no2, result);
            break;
        case '*':
            result = no1 * no2;
            printf("\nMultiplication of %d and %d is: %d\n", no1, no2, result);
            break;
        case '/':
            if (no2 == 0) {
                printf("\nError: Division by zero is not allowed.\n");
            } else {
                result = no1 / no2;
                printf("\nDivision of %d and %d is: %d\n", no1, no2, result);
            }
            break;
        case '%':
            if (no2 == 0) {
                printf("\nError: Modulo by zero is not allowed.\n");
            } else {
                result = no1 % no2;
                printf("\nModulo of %d and %d is: %d\n", no1, no2, result);
            }
            break;
        default:
            printf("\nError: Invalid operator '%c'. Please use +, -, *, /, or %%.\n", operator);
            break;
    }

    getch();
}

