//Find area of Triangle Formula : A = 1/2 × b × h 

#include <stdio.h>
#include <conio.h>

int main()
{
    float base,height,area;

    printf("\nEnter base of traingle: ");
    scanf("%f", &base);
    
    printf("\nEnter height of traingle: ");
    scanf("%f", &height);

    area = (base*height) / 2;

    printf("\narea of traingle is : %.2f",area);

    return 0;
}

