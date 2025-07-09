/*Write a C program that takes a string as input and reverses it using a function*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int reverse(char str[])
{
	int len,i,temp;
	
	len = strlen(str);
	
	for(i=0;i<len/2;i++)
	{
		temp = str[i];
		str[i] = str[len-1-i];
		str[len-1-i] = temp;
	}
}
int main()
{
	char str[100];
	
	printf("\n Enter a String : ");
	scanf("%s",&str);
	
	
	//call function
	reverse(str);
	
		printf("\n reverse string = %s ",str);
	
	
	return 0;
}


