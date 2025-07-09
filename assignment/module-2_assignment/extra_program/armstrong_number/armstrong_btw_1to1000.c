//Write a program to find all Armstrong numbers between 1 and 1000

#include <stdio.h>
#include <conio.h>

int main() 
{
    int num,temp,digit,sum;

    printf("\n Armstrong numbers between 1 and 1000 are: ");

    for(num=1;num<=1000;num++) 
	{
        temp=num;
        sum=0;

        while(temp!=0) 
		{
            digit = temp%10;
            sum += digit*digit*digit; // cube of each digit
            temp = temp/10;
        }

        if(sum == num) 
		{
            printf("%d\n", num);
        }
    }

    return 0;
}

