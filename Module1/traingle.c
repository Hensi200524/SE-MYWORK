//write a program to find the area of traingle

#include<stdio.h>
#include<conio.h>

void main()
{
   int base;
   int height;
   int ans;
  
   printf("Enter base:");
   scanf("%d",&base);
   
   printf("Enter height:");
   scanf("%d",&height);
   
   
   ans = (base*height) /2;
   printf("Area of traingle is %d:",ans);
     
   getch();
}
