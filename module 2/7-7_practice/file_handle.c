//writing file and reading file

#include <stdio.h>
#include <conio.h>

void main()
{
	FILE f1;
	char ch;
	
	
	//file write
	f1 = fopen("Hensi","w");
	printf("\n Enter your data : ");
	while((ch = getchar()) != '0')//single charcter so single quote,getchar=scanf
	{
		putc(ch,f1);//printf
	}
	fcolse(f1);
	
	getch();
}