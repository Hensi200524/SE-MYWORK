//Check whether a given number is even or odd.

#include<stdio.h>
#include<conio.h>

void main()
{
    int no;
    
    printf("\n Please Enter your number:");
    scanf("%d",&no);
    
    if(no%2 == 0){
        printf("\n Even number");
    }
    else
    {
        printf("\n odd number");
    }
    
    getch();
}
