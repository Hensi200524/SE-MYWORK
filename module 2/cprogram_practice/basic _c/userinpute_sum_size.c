//Accept 2 numbers and find out its sum check it size

#include <stdio.h>
#include <conio.h>

void main()
{
	
	int num1,num2,sum;
	
	printf("\n Enter number 1 : ");
	scanf("%d",&num1);
	
	printf("\n Enter number 2 : ");
	scanf("%d",&num2);
	
	sum = num1+num2;
	printf("Sum=%d\n",sum);
    printf("Size of sum variable = %d bytes\n", sizeof(sum));
    
	getch();
}
