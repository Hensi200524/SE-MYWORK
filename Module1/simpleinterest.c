//write a program to find the simple interest

#include<stdio.h>
#include<conio.h>

void main()
{
    int p,r,t;
    float ans;
    
    printf("Enter the value of principal:");
    scanf("%d",&p);
    
     printf("Enter the value of rate:");
    scanf("%d",&r);
    
     printf("Enter the value of time:");
    scanf("%d",&t);
    
    ans = (p*r*t)/100;

    printf("the simple interest is %f",ans);
    getch();
}

    
   
