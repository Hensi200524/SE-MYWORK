//Display "Hot", "Warm", or "Cold" based on temperature.

#include<stdio.h>
#include<conio.h>

void main() 
{
    int temperature;

    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temperature);

    if (temperature >= 30) {
        printf("Hot\n");
    } else if (temperature >= 15) {
        printf("Warm\n");
    } else {
        printf("Cold\n");
    }

    getch();
}

