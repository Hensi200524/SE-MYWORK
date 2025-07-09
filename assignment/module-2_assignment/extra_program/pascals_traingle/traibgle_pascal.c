//Write a C program that generates Pascal�s Triangle up to N rows using loops.

#include <stdio.h>
#include <conio.h>

int fact(int n) 
{
    int fact=1,i;
    for(i=1;i<=n;i++)
        fact*=i;
    return fact;
}

int combination(int n,int r) 
{
    return fact(n)/(fact(r)*fact(n-r));
}

void main() {
    int rows,i,j;

    printf("\n Enter the number of rows: ");
    scanf("%d",&rows);

    printf("\n Pascal's Triangle:\n\n");

    for(i=0;i<rows;i++) 
	{
        // Print spaces for alignment
        for(int space=0;space<rows-i-1;space++)
        {
        	 printf("  ");
		}
        // Print numbers
        for(j= 0;j<=i;j++)
        {
        	printf("%4d",combination(i,j));
		}
        printf("\n");
    }

    getch();
}

