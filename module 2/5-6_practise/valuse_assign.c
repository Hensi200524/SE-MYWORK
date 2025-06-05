#include<stdio.h>
#include<conio.h>

void main()
{
    int usernum,luckynum=24;
    
    printf("Enter Number between 1 to 30: ");
    scanf("%d",&usernum);
    
    printf("\n Your Lucky Number is %d ",luckynum);
    luckynum = usernum;
    printf("\n Your Lucky Number is %d ",luckynum);
    
	 getch();
}
