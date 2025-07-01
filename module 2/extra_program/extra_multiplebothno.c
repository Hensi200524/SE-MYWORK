//Whether the number is a multiple of both 3 and 5.

#include<stdio.h>
#include<conio.h>

void main()
{
	int no;
	
	printf("\n Enter The Number:");
	scanf("%d",&no);
	
	// Check if the number is divisible by both 3 and 5
    if (no % 3 == 0 && no % 5 == 0) {
        printf("\n The number %d is a multiple of both 3 and 5.\n", no);
    } else {
        printf("\n The number %d is NOT a multiple of both 3 and 5.\n", no);
    }
    
    getch();

}
