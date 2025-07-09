//Write the program without using built-in string handling functions.

#include <stdio.h>
#include <conio.h>
#include <string.h>

int stringlength(char str[])
{
	int i =0;
	
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

void reverse(char str[])
{
	int len,i,temp;
	
	len = stringlength(str);
	
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


