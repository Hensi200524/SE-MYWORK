#include <stdio.h>

int main() 
{
    float units, amount, surcharge, total;

    // Input electricity units
    printf("Enter total electricity units consumed: ");
    scanf("%f", &units);

    // Calculate base amount according to the given conditions
    if(units <= 50) {
        amount = units * 0.50;
    } else if(units <= 150) {
        amount = (50 * 0.50) + ((units - 50) * 0.75);
    } else if(units <= 250) {
        amount = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Calculate surcharge (20%)
    surcharge = amount * 0.20;

    // Calculate total amount
    total = amount + surcharge;

    // Display the result
    printf("Electricity Bill:\n");
    printf("Base Amount = Rs. %.2f\n", amount);
    printf("Surcharge (20%%) = Rs. %.2f\n", surcharge);
    printf("Total Bill = Rs. %.2f\n", total);

    return 0;
}
