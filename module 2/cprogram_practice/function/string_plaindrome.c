/*Modify the program to check if a given string is a palindrome*/

#include <stdio.h>
#include <conio.h>

int palindrome(char str[])
{
	int len,i;
	
	len = strlen(str);
	
	for(i=0;i<len/2;i++)
	{
		if(str[i] != str[len-1-i])
		{
			return 0;
		}
		return 1;
	}
}
int main()
{
	char str[100];
	
	printf("\n Enter a String : ");
	scanf("%s",&str);
	
	
	//call function
	if(palindrome(str))
	{
		printf("\n %s is palindrome string",str);
	}
	else
	{
		printf("\n %s is not palindrome string",str);
	}
	
	
	return 0;
}
