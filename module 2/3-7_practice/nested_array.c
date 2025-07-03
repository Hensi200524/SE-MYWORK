//nested structure

#include <stdio.h>
#include <conio.h>

struct education
{
	char degree[50];
	float percentage;
}e1;

struct personal
{
	int rollno;
	char name[50];
	int age;
	struct education edu;
}p1;
int main()
{
	printf("\n enter rollno :");
	scanf("%d",&p1.rollno);
	
	printf("\n enter name :");
	scanf("%s",&p1.name);
	
	printf("\n enter age :");
	scanf("%d",&p1.age);
	
	printf("\n enter degree :");
	scanf("%s",&p1.edu.degree);
	
	printf("\n enter percentage :");
	scanf("%f",&p1.edu.percentage);
	
	printf("\n rollno is : %d",p1.rollno);
	printf("\n name is : %s",p1.name);
	printf("\n age is : %d",p1.age);
	printf("\n degree is : %s",p1.edu.degree);
	printf("\n percentage is : %f",p1.edu.percentage);
	return 0;
}
