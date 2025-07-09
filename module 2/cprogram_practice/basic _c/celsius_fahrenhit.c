//Convert Temperature Celsius into Fahrenheit

//Fahrenheit=(Celsius× 5/9)+32

#include <stdio.h>
#include <conio.h>

int main()
{
    float celsius, fahrenheit;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f",&celsius);

    // Convert to Fahrenheit
    fahrenheit =(celsius*9/5)+32;

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}

