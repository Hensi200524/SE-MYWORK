//Write a C program that uses the break statement to stop printing numbers when it reaches 5.

#include <stdio.h>
#include <conio.h>

int main() 
{
    int i;

    for (i=1;i<=10;i++)
	{
        if(i == 5) 
		{
            break;
        }
        printf("%d\n",i);
    }

    return 0;
}

