//string funcation(strlwr)

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char name[20];
	
	
	printf("\n Enter your name : ");
	scanf("%s",&name);
	
	printf("lowercase of name = %s" ,strlwr(name));
	getch();
}
