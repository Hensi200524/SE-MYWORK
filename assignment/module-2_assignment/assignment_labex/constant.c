//Write a C program that includes variables, constants, and comments

#include <stdio.h> // Standard input/output header
#include<conio.h> // console input/output header

void  main() {

    // Variable declarations
    const float Pi =3.14; // Define constant
    float radius;      // Variable to store the radius of the circle
    float area;      // Variable to store the calculated area

    printf("\n Enter the radius of the circle: ");
    scanf("%f", &radius);  // user input

    // Calculate the area of the circle
    area = Pi*radius*radius;

    // Displaying the result
    printf("\n The area of the circle with radius %f is %f\n", radius, area);
    
}
