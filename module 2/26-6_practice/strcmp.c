//string funcation(strcmp)

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char name1[20]="Hensi";
	char name2[50];
	
	do
	{
		printf("\n enter any name : ");	
		scanf("%s",&name2);
		
	}while(strcmp(name1,name2)!=0);
	
	printf("\n correct name");
	
	
	getch();
}
