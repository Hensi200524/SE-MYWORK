/*Write a C program to create a file, write a string into it, close the file, then
open the file again to read and display its contents.*/

#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *f1;
	char ch;
	
	
	//file write
	f1 = fopen("Henny","w");
	printf("\n Enter your data : ");
	while((ch = getchar()) != '0')//single charcter so single quote,getchar=scanf
	{
		putc(ch,f1);//printf
	}
	fclose(f1);
	
	//file read
	printf("\n Read data from file : ");
	f1 = fopen("Henny","r");
	while((ch = getc(f1)) != EOF)//End Of File
	{
		printf("%c",ch);
	}
	fclose(f1);
	
	return 0;
}
