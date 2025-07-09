/****Write a C program that takes three numbers from the user and determines:The largest number and
smallest number using if-else****/

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;

    printf("\n Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);

    //find largest
    int largest;

    if(a >= b && a >= c)
	{
        largest = a;
    }
    else if(b >= a && b >= c)
	{
        largest = b;
    }
    else
	{
        largest = c;
    }
    

    //find smallest
    int smallest;
    if(a <= b && a <= c)
	{
        smallest = a;
    }
    else if(b <= a && b <= c)
	{
        smallest = b;
    }
    else
	{
        smallest = c;
    }

    printf("\n largest number is:%d",largest);
    printf("\n smallest number is:%d",smallest);
    getch();
}
