/**Write a C program that takes two strings from the user and concatenates them
using strcat().**/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char name[50],surname[20];
	
	printf("\n Enter name : ");
	scanf("%s",&name);
	
	printf("\n Enter surname : ");
	scanf("%s",&surname);
	
	printf("\n %s",strcat(name,surname));
	getch();
}
