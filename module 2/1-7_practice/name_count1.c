#include <stdio.h>
#include <conio.h>

void main()
{
	printf("%d",printf("Hensi"));
	getch();
}


/***
Inner printf("Hensi"):

This runs first because it's the argument of the outer printf.

It prints the string "Hensi" to the screen.

It returns the number of characters it printed, which is 5.

Outer printf("%d", 5):

This prints the number 5, the return value from the inner printf.
***/

