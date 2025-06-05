#include<stdio.h>
#include<conio.h>

void main()
{
	int myuid=123,mypass=456,mno=1234567897;
	int uid,upass,umno;
	
	printf("Enter your uid :");
	scanf("%d",&uid);
	
	printf("Enter your upass :");
	scanf("%d",&upass);
	
	printf("Enter your umno :");
	scanf("%d",&umno);
	
	if(uid == myuid && upass == mypass && umno == mno)
	{
		printf("Login successfully");
	}
	else
	{
		printf("Not Login properly");
	}
	getch();
}
