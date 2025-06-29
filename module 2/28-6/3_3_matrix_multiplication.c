//3*3 multiplication matrix

#include <stdio.h>
#include <conio.h>

void main()
{
	int a[3][3],b[3][3],result[3][3] = {0};
	int i,j,k;
	
	
	printf("\n Enter first matrix value :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	
	}
	
	printf("\n Enter second matrix value :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
		
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				result[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	
	printf("\n result matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{ 
			printf("matrix is : %d",result[i][j]);
		}
		printf("\n");
	}
	
	
	getch();
}
