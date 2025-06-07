//Check if a number is positive, negative, or zero.

#include<stdio.h>
#include<conio.h>

void main()
{
    int no;
    
    printf("Please Enter your number:");
    scanf("%d",&no);
    
    if(no>0){
        printf("positive number");
    }
    else if(no==0)
	{
    	printf("Zero");
	}	
    else
    {
        printf("Negative number");
    }
    
    getch();
}
