//goto statement

#include <stdio.h>
#include <conio.h>

void main()
{
	int no,i=0,sum=0;
	
	printf("enter any number :");
	scanf("%d",&no);
	
	loop:
	i++;
	sum+=i;
	
	if(i<no)
		goto loop;
	
	printf("sum of %d is : %d",no,sum);
	getch();
}
