#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	
	for(i=1;i<=10;i++)
	{
		if(i==8)
		{
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
}
