//Use an array of structures to store details of 3 students and print them.
#include <stdio.h>
#include <conio.h>

struct students
{
	char name[100];
	int rollno;
	int marks;
}s1[100];

int main()
{
	int i;
	
	for(i=0;i<3;i++)
	{
	printf("\n Enter the name : ");
	scanf("%s",&s1[i].name);
	
	printf("\n Enter the rollno : ");
	scanf("%d",&s1[i].rollno);
	
	printf("\n Enter the marks : ");
	scanf("%d",&s1[i].marks);
	}
	printf("\n");
	
	for(i=0;i<3;i++)
	{
	printf("\n-----------------student details----------------");
	printf("\n name		: %s",s1[i].name);
	printf("\n rollno		: %d",s1[i].rollno);
	printf("\n marks		: %d",s1[i].marks);
	}
	
	return 0;
}
