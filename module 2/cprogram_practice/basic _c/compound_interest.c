//Calculate compound interest

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float principal, rate, time, amount, compoundInterest;

    // Input values
    printf("Enter principal : ");
    scanf("%f",&principal);

    printf("Enter rate : ");
    scanf("%f",&rate);

    printf("Enter time in years: ");
    scanf("%f",&time);

    // Calculate compound amount
    amount = principal * pow((1 + rate / 100), time);

    // Calculate compound interest
    compoundInterest = amount - principal;

    // Output result
    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Total Amount = %.2f\n", amount);

    return 0;
}

