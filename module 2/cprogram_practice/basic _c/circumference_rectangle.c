//Find circumference of Rectangle formula : C = 2*(l+w) 

#include <stdio.h>
#include <conio.h>

int main()
{
	
    float l,w,c;
    
    printf("Enter the side of the length: ");
    scanf("%f", &l);

    printf("Enter the side of the width: ");
    scanf("%f", &w);

    c = 2*(l+w);

    printf("Circumference of the rectangle is: %.2f\n",c);

    return 0;
}

