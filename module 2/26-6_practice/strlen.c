//string funcation(strlen)

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char name[20];
	
	
	printf("\n Enter your name : ");
	scanf("%s",&name);
	
	printf("\n Length of name = %d" ,strlen(name));
	getch();
}
