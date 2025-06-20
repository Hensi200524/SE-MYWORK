//find the area of a rectangular prism formula : A=2(wl+hl+hw) 

#include <stdio.h>
#include <conio.h>

int main() 
{
    float width, length, height, area;

    printf("Enter width: ");
    scanf("%f", &width);

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter height: ");
    scanf("%f", &height);

    // Calculate surface area
    area = 2*(width*length+height*length+height*width);

    // Output the result
    printf("Surface area of the rectangular prism is: %.2f\n", area);

    return 0;
}

