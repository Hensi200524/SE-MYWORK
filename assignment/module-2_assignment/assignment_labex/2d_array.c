// to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.


#include<stdio.h>
#include<conio.h>

void main()
{
	int matrix[3][3],i,j,sum=0;
	
	printf("\n Enter a 9 element for 3*3 matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
            sum+=matrix[i][j];
		}
		//printf("\n");
	}
	
	 printf("\nSum of all elements = %d\n", sum);
	getch();
}
