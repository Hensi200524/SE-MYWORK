//nested structure with array

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
}p1[50];
int main()
{
	int i;
	
	for(i=0;i<2;i++)
	{
	printf("\n enter rollno :");
	scanf("%d",&p1[i].rollno);
	
	printf("\n enter name :");
	scanf("%s",&p1[i].name);
	
	printf("\n enter age :");
	scanf("%d",&p1[i].age);
	
	printf("\n enter degree :");
	scanf("%s",&p1[i].edu.degree);
	
	printf("\n enter percentage :");
	scanf("%f",&p1[i].edu.percentage);
	}
	printf("\n");
	
	for(i=0;i<2;i++)
	{
	printf("\n rollno is : %d",p1[i].rollno);
	printf("\n name is : %s",p1[i].name);
	printf("\n age is : %d",p1[i].age);
	printf("\n degree is : %s",p1[i].edu.degree);
	printf("\n percentage is : %f",p1[i].edu.percentage);
	}
	return 0;
}
