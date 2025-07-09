//Fibonacci Series Program in C Using DO While Loop

#include<stdio.h>
#include<conio.h>

int main()
{
    int no,a=0,b=1,next,i=2;

    printf("\n Enter number :");
    scanf("%d",&no);

    printf(" %d %d",a,b);

    do
    {
        next = a+b;
        printf("%d",next);
        a = b;
        b = next;
        i++;
    }while(i<no);
    return 0;
}