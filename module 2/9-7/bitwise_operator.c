//bitwise operator

#include <stdio.h>
#include <conio.h>

void main()
{
	int a = 15;
	int b= 3;
	
	// Performing Bitwise AND on a and b
	int c = a&b;
	printf("%d \n",c);

	// Performing Bitwise OR on a and b
	int d = a | b;
	printf("%d \n",d);

	// Performing Bitwise XOR on a and b
	int e = a ^ b;
	printf("%d \n",e);

	// Performing Bitwise NOT on a
	int f = ~a;
	printf("%d \n",f);

	// Performing left shift on a
	int g = a << b;
    printf("%d \n",g);

	// Performing right shift on a
	int h = a >> b;
    printf("%d \n",h);
    
	getch();
}
