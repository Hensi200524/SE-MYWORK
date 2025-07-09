//the program to skip printing the number 3 using the continue statement.

#include <stdio.h>
#include <conio.h>

int main()
{
    int i;

    for(i=1;i<=10;i++)
	{
        if(i==3)
		{
            continue; 
        }
        printf("%d\n", i);
    }

    return 0;
}

