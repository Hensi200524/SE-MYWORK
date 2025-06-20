//Find area of Rectangle Formula : A=wl 

#include <stdio.h>
#include <conio.h>

int main()
{
    int width,length,area;

    printf("\nEnter width of rectangle : ");
    scanf("%d", &width);
    
    printf("\nEnter length of rectangle : ");
    scanf("%d", &length);

    area = width*length;

    printf("\narea of rectangle is : %d",area);

    return 0;
}

