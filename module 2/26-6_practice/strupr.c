//string funcation(strupr)

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char name[20];
	
	
	printf("\n Enter your name : ");
	scanf("%s",&name);
	
	printf("uppercase of name = %s" ,strupr(name));
	getch();
}
