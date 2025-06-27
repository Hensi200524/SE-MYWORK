//string funcation(strlen)

#include <stdio.h>
#include <conio.h>

void main()
{
	char name[20];
	
	
	printf("\n Enter your name : ");
	scanf("%s",&name);
	
	printf("Length of name = %d" ,strlen(name));
	getch();
}
