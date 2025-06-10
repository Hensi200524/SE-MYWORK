//Check whether a given number is even or odd.

#include<stdio.h>
#include<conio.h>

void main()
{
    int no;
    
    printf("Please Enter your number:");
    scanf("%d",&no);
    
    if(no%2){
        printf("Even number");
    }
    else
    {
        printf("odd number");
    }
    
    getch();
}
