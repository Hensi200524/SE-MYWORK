/***Write a C program that takes an integer input from the user and prints its multiplication
table using a for loop.***/

#include<stdio.h>
#include<conio.h>

void main()
{
	int no,i,ans=0;
	
	printf("Enter the Number : ");
	scanf("%d",&no);
	
	//print multiplication  tabel
	
	printf("multiplication tabel for %d :\n",no);
	
	for(i=1;i<=10;i++)
	{
		ans = no*i;
		printf("%d * %d = %d\n",no,i,ans);
	}
	getch();
}
