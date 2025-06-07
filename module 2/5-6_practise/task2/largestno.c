//Identify the largest among three numbers.

#include<stdio.h>
#include<conio.h>

void main() 
{
    int no1, no2, no3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &no1, &no2, &no3);

    if (no1 >= no2 && no1 >= no3) {
        printf("The largest number is: %d\n", no1);
    } else if (no2 >= no1 && no2 >= no3) {
        printf("The largest number is: %d\n", no2);
    } else {
        printf("The largest number is: %d\n", no3);
    }

    getch();
}

