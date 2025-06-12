//addition first and last digit

#include <stdio.h>
#include <conio.h>

void main()
{
	int num,ldigit,fdigit,ans=0;
	
	printf("Enter Any Number : ");
	scanf("%d",&num);
	
	ldigit = num % 10;
	
	while(num>0)
	{
		if(num>9)
		{
			num = num/10;
		}
		else
		{
			fdigit = num;
			ans = fdigit+ldigit;
			num = num/10;
		}
	}
	printf("Sum Of First and Last Digit Are : %d",ans);
	getch();
}
