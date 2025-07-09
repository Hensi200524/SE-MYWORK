//Convert temperature fahrenheit to celsius

#include <stdio.h>
#include <conio.h>

int main()
{
    float celsius,fahrenheit;
    
    printf("Enter temperature in fahrenheit: ");
    scanf("%f",&fahrenheit);

    // Convert to celsius
    celsius =(fahrenheit-32)*5/9;

    printf("Temperature in celsius = %.2f\n", celsius);

    return 0;
}

