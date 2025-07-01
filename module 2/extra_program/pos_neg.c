#include<stdio.h>
#include<conio.h>

void main()
{
    int no;
    
    printf("\n Please Enter your number:");
    scanf("%d",&no);
    
    if(no>0){
        printf("\n positive number");
    }
    else if(no==0)
	{
    	printf("\n Zero");
	}	
    else
    {
        printf("\n Negative number");
    }
    
    getch();
}
