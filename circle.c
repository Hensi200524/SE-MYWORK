#include<stdio.h>
#include<conio.h>

void main()
{
   float pi=3.14;
   int r;
   float ans;
  
   printf("Enter radius:");
   scanf("%d",&r);
   
   ans = pi*r*r;
   printf("Area of circle is %f:",ans);
     getch();
}