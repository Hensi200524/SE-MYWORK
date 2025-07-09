//Write a C program that defines a structure to store a student's details (name,roll number, and marks).

#include <stdio.h>
#include <conio.h>

struct students
{
	char name[100];
	int rollno;
	int marks;
}s1;

int main()
{
	printf("\n Enter the name : ");
	scanf("%s",&s1.name);
	
	printf("\n Enter the rollno : ");
	scanf("%d",&s1.rollno);
	
	printf("\n Enter the marks : ");
	scanf("%d",&s1.marks);
	
	printf("\n-----------------student details----------------");
	printf("\n name		: %s",s1.name);
	printf("\n rollno		: %d",s1.rollno);
	printf("\n marks		: %d",s1.marks);
	return 0;
}
