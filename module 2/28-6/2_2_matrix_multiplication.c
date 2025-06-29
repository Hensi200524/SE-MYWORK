//2 * 2 matrix multiplication


#include <stdio.h>
#include <conio.h>

void main()
{
	
	int a[2][2],b[2][2],result[2][2] = {0};
	int i,j,k;
	
	printf("\n enter the vlaue for first 2*2 matrix :");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	
	printf("\n enter the vlaue for second 2*2 matrix :");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
		
	}
	
	printf("\n Matrix multiplication :");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				result[i][j] += a[i][k]*b[k][j];
			}
		}	
	}
	
	printf("\nResultant matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\n");	
	}
	getch();
}
