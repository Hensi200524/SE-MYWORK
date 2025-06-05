#include<stdio.h>
#include<conio.h>

void main()
{
	char myusername='H';
	int mypass=1234;
	int uname,upass;
	
	printf("Enter username: ");
	scanf("%c",&uname); 
	
	printf("Enter password: ");
	scanf("%d",&upass); 
	
	if(uname == myusername)
	{
		printf("uname is right");
	}
	if(upass == mypass)
	{
		printf("\nupass is right");
	}
	else
	{
		printf("\n wrong credentials");
	}
	getch();
}
