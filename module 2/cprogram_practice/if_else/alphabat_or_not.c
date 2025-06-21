//to check whether a character is in the alphabet or not

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	
	printf("Enter the Character : ");
	scanf("%c",&ch);
	
	if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
	{
		printf("it is alphabat");
	}
	else
	{
		printf("it is not alphabat");
	}
	getch();
}
