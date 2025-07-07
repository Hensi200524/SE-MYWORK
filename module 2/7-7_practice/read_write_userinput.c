//write and read file from user input

#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *f1,*f2,*f3;
	int number,i;
	
	printf("Enter number:");
	f1 = fopen("File1","w");
	
	for(i=1;i<=5;i++)
	{
		scanf("%d",&number);
		
		if(number == -1)
		{
			break;
		}
		putw(number,f1);
	}
	fclose(f1);
	
	f1 = fopen("File1","r");
	f2 = fopen("Odd","w");
	f3 = fopen("Even","w");
	
	while((number = getw(f1)) != EOF)
	{
		if(number%2 == 0)
		{
			putw(number,f3);
		}
		else
		{
			putw(number,f2);
		}
	}
	
	fclose(f1);
	fclose(f2);
	fclose(f3);
	
	//read all file
	f1 = fopen("File1","r");
	f2 = fopen("Odd","r");
	f3 = fopen("Even","r");
	
	printf("\n content of File1 file:");
	while((number = getw(f1)) != EOF)
	{
		printf("%d ",number);
	}
	
	printf("\n content of Odd file:");
	while((number = getw(f2)) != EOF)
	{
		printf("%d ",number);
	}
	
	printf("\n content of Even file:");
	while((number = getw(f3)) != EOF)
	{
		printf("%d ",number);
	}
	
	fclose(f1);
	fclose(f2);
	fclose(f3);
	return 0;
}
