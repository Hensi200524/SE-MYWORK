//C Program to Check Uppercase or Lowercase or Digit or Special Character

#include<stdio.h>
#include<conio.h>

int main() 
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z') 
	{
        printf("It is an Uppercase Letter\n");
    }
    else if(ch>='a' && ch<='z') 
	{
        printf("It is a Lowercase Letter\n");
    }
    else if(ch>='0' && ch<='9') 
	{
        printf("It is a Digit\n");
    }
    else 
	{
        printf("It is a Special Character\n");
    }

    return 0;
}

