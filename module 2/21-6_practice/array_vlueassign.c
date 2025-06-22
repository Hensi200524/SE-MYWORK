//array one dimensional array with value assign

#include <stdio.h>
#include <conio.h>

void main()
{
	int marks[] = {10,20,30,40,50,60,70};//array variable and give value
	int i;
	
	//array index
	/*marks[0] = 10;
	marks[1] = 20;
	marks[2] = 30;
	marks[3] = 40;
	marks[4] = 50;*/
	
	for(i=0;i<7;i++)
	{
		printf("marks is : %d \n",marks[i]);
	}
	getch();
}
