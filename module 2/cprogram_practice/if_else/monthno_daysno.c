//Accept number of students from user. I need to give 5 apples to each student. How many apples are required? 

#include <stdio.h>
#include <conio.h>

void main()
{
	int m_no;
	
	printf("Enter the Month number : ");
	scanf("%d",&m_no);
	
	if(m_no==1 || m_no==3 || m_no==5 || m_no==7 || m_no==8 || m_no==10 || m_no==12 )
	{
		printf("31 days \n");
	}
	else if(m_no==4 || m_no==6 || m_no==9 || m_no==11)
	{
		printf("30 days \n");
	}
	else if(m_no ==2)
	{
		printf("the month day is 28 ya 29(depend on leap year)");
	}
	else
	{
		printf("Invalid number");
	}
	
	getch();
}
