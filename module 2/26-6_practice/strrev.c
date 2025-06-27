//string funcation(strrev)

#include <stdio.h>
#include <conio.h>

void main()
{
	char name[20];
	
	
	printf("\n Enter your name : ");
	scanf("%s",&name);
	
	printf("reverse of name = %s" ,strrev(name));
	getch();
}
