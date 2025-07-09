//Accept 5 names from user at run time. 

#include <stdio.h>
#include <conio.h>

int main()
{
	int i;
	char name[20];
	
	for(i=1;i<=5;i++)
	{
		printf("\n Enter name %d: ",i);
		scanf("%s",&name);
		printf("\n name %d : %s \n",i,name);
	}
	
	
	return 0;
}
