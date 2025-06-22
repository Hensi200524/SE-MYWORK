//Given Date Month and the Year Is Correct or Not Using If-Else

#include<stdio.h>
#include<conio.h>

void main()
{
    int day, month, year;

    printf("Enter day: ");
    scanf("%d",&day);

    printf("Enter month: ");
    scanf("%d",&month);

    printf("Enter year: ");
    scanf("%d",&year);

    // Check if month is between 1 to 12
    if(month<1 || month>12) 
	{
        printf("Invalid month!\n");
    }
    // Check if day is between 1 to 31
    else if(day<1 || day>31) 
	{
        printf("Invalid day!\n");
    }
    // Check for months that only have 30 days
    else if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) 
	{
        printf("Invalid day for this month!\n");
    }
    // Check for February
    else if(month == 2 && day > 28) 
	{
        printf("Invalid day for February!\n");
    }
    else 
	{
        printf("The date is valid: %02d-%02d-%04d\n", day, month, year);
    }

    getch();
}

