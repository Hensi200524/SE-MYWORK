//Check Number Is vowel or not

#include<stdio.h>
#include<conio.h>

void main()
{
	char alpha;
	
	printf("Enter the alphabat : ");
	scanf("%c",&alpha);
	
	if(alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == '0' || alpha == 'u')
	{
		printf("it's a vowel");
	}
	else
	{
		printf("it's not vowel");
	}
	getch();
}
