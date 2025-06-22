//Get value for diffrent subjects and find the percentage

#include<stdio.h>
#include<conio.h>

void main()
{
	int marks[5];
	char subject[5][20] = {"gujrati","maths","english","hindi","science"};
	int total=0,i;
	float percentage;
	
	for(i=0;i<5;i++)
	{
		printf("Enter marks for %s",subject[i]);
		scanf("%d",&marks[i]);
		total+=marks[i];
	}
	percentage=total/5;
	
	printf("\n Total of marks are: %d",total);
	printf("\n percentage is:%f",percentage);
	getch();
}
