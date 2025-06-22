/***Write a C program to input marks of five subjects Physics, Chemistry,
Biology, Mathematics and Computer. Calculate percentage and grade
according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade***/

#include <stdio.h>
#include <conio.h>

void main()
{
	float phy,chem,bio,math,com,total,per;
	
	printf("\n Enter the marks of physics :");
	scanf("%f",&phy);
	
	printf("\n Enter the marks of Chemistry :");
	scanf("%f",&chem);
	
	printf("\n Enter the marks of Biology :");
	scanf("%f",&bio);
	
	printf("\n Enter the marks of Mathematics :");
	scanf("%f",&math);
	
	printf("\n Enter the marks of Computer :");
	scanf("%f",&com);
	
	total = phy+chem+bio+math+com;
	per = (total/500)*100;
	
	printf("total marks : %f",total);
	printf("total percentage : %f",per);
	
	if(Percentage >= 90)
	{
		printf("Grade A \n");
	}
	else if(Percentage >= 80)
	{
		printf("Grade B \n");
	}
	else if(Percentage >= 70)
	{
		printf("Grade C \n");
	}
	else if(Percentage >= 60)
	{
		printf("Grade D \n");
	}
	else if(Percentage >= 40)
	{
		printf("Grade E \n");
	}else if(Percentage < 40)
	{
		printf("Grade F \n");
	}
	
	
	
	
	
	getch();
}
