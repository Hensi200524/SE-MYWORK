/*Write a C program that checks whether a given number is an Armstrong number or not (e.g.,
153 = 1^3 + 5^3 + 3^3)*/


#include <stdio.h>
#include <conio.h>

int main() 
{
    int num,original,digit,sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d",&num);

    original = num;

    while(num!=0)
	{
        digit = num%10;             // get last digit
        sum = sum+(digit*digit*digit); // cube and add
        num = num/10;               // remove last digit
    }

    if(sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}

