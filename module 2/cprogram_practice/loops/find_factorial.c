//Accept 5 numbers from user and find those numbers factorials 

#include <stdio.h>
#include <conio.h>

void main()
{
    int num, i,j,fact;
    
    printf("\n Enter 5 numbers to find out the factorail");

    

    if(num < 0)
	{
        printf("\n Factorial is not possible for negative numbers.\n");
    } 
	else 
	{
        for(i=1;i<=5;i++) 
		{
            printf("\n Enter number %d: ",i);
    		scanf("%d", &num);
    		
    		fact = 1;
    		
    		for(j=1;j<=num;j++)
    		{
    			fact=fact*j;
			}
			printf("Factorial of %d is: %d\n", num, fact);
        }
        
    }

    getch();
}

	
