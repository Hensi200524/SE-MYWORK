#include<stdio.h>
#include<conio.h>

void main()
{
	int time,t1;
	
	printf("Enter your time with 24 hour:");
	scanf("%d",&t1);
	
	if(t1>12){
		time = t1-12;
		printf("time is %d pm",time);
	}
	else{
		printf("time is %d am",t1);
	}
	getch();
}
