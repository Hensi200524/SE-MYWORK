//Get the userinput in array and findout the minimum number from given list

#include <stdio.h>
#include <conio.h>

void main()
{
	 int num[5],i,min;
    
    for(i= 0;i<5;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&num[i]);
    }

    min=num[0];


    for(i=1;i<5;i++)
    {
        if(num[i]<min)
        {
            min=num[i];  
        }
	}
    printf("Minimum number is: %d", min);
	getch();
}
