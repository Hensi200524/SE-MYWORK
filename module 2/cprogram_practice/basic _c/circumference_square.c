//Find circumference of square formula : C = 4 * a

#include <stdio.h>
#include <conio.h>

int main()
{
	
    float a, circumference;

    printf("Enter the side of the square: ");
    scanf("%f", &a);

    circumference = 4 * a;

    printf("Circumference of the square is: %.2f\n", circumference);

    return 0;
}

