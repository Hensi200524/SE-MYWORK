// Implement the same program using a recursive function

#include <stdio.h>
#include <conio.h>

int fact(int n) 
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int combination(int n,int r) 
{
    return fact(n)/(fact(r)*fact(n-r));
}

int main() {
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
    return 0;
}

