/*Extend the program using a switch statement to display the month
name based on the user’s input (1 for January, 2 for February, etc.)*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	
	printf("\n Please Select The Month Based On Number");
	
	printf("\n Enter The Number : ");
	scanf("%d",&num);
	
	switch(num){
		case 1: printf("\n January");
		break;
		
		case 2: printf("\n February");
		break;
		
		case 3: printf("\n March");
		break;
		
		case 4: printf("\n April");
		break;
		
		case 5: printf("\n May");
		break;
		
		case 6: printf("\n June");
		break;
		
		case 7: printf("\n July");
		break;
		
		case 8: printf("\n August");
		break;
		
		case 9: printf("\n September");
		break;
		
		case 10: printf("\n October");
		break;
		
		case 11: printf("\n November");
		break;
		
		case 12: printf("\n December");
		break;
		
		default : printf("\n Your Number is not valid.");
        break;
	}
	return 0;
	
}
