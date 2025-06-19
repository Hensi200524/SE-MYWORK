/*Write a program you have to print the Fibonacci series up to user given
number*/

#include <stdio.h>
#include <conio.h>

void main() 
{
    int num,a=0,b=1,c;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Fibonacci series up to %d:\n", num);

    while (a<=num)
	{
        printf("%d\n",a);
        c = a + b;
        a = b;
        b = c;
    }

    getch();
}

