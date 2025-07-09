/*Write a C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them. Display the results*/


#include <stdio.h>
#include <conio.h>

void main()
{
	int n1,n2;
	
	printf("Enter number 1 :");
	scanf("%d",&n1);
	
	printf("Enter number 2 :");
	scanf("%d",&n2);
	
	// -------- Arithmetic Operations --------
    printf("\n--- Arithmetic Operations ---\n");
    printf("n1 + n2 = %d\n", n1 + n2);
    printf("n1 - n2 = %d\n", n1 - n2);
    printf("n1 * n2 = %d\n", n1 * n2);
    if (n2 != 0) 
	{
        printf("n1 / n2 = %d\n", n1 / n2);
        printf("n1 %% n2 = %d\n", n1 % n2);  
    } 
	else 
	{
        printf("Division and modulus by zero are not allowed.\n");
    }

    // -------- Relational Operations --------
    printf("\n--- Relational Operations ---\n");
    printf("n1 > n2 : %d\n", n1 > n2);
    printf("n1 < n2 : %d\n", n1 < n2);
    printf("n1 >= n2: %d\n", n1 >= n2);
    printf("n1 <= n2: %d\n", n1 <= n2);
    printf("n1 == n2: %d\n", n1 == n2);
    printf("n1 != n2: %d\n", n1 != n2);
    

    // -------- Logical Operations --------
    printf("\n--- Logical Operations ---\n");
    printf("(n1 && n2) : %d\n", n1 && n2);  // True if both are non-zero
    printf("(n1 || n2) : %d\n", n1 || n2);  // True if at least one is non-zero
    printf("!(n1)     : %d\n", !n1);      // True if a is zero
	
	getch();
}
