//Get the userinput in array and findout the maximum number from given list

#include <stdio.h>
#include <conio.h>

void main()
{
	 int num[5],i,max;
    
    for(i=0;i<5;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&num[i]);
    }

    max=num[0];


    for(i=1;i<5;i++)
    {
        if(num[i]>max)
        {
            max=num[i];  
        }
	}
    printf("Maximum number is: %d",max);
	getch();
}
