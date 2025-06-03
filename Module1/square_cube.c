//write a program to make a square and cube of number.

#include<stdio.h>
#include<conio.h>

void main()
{
   int n;
   int square,cube;
  
   printf("Enter number:");
   scanf("%d",&n);
    
    square = n*n;
   
    cube = n*n*n;
    
   printf("square of %d is: %d \n",n,square);
   
   printf("cube of %d is: %d \n",n,cube);
    
   getch();
}
