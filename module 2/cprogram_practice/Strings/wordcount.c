//Write a C program that counts the number of words in a sentence entered by the user.

#include <stdio.h>
#include <conio.h>

int main()
{
	char str[200];
	int i,wordcount=1;
	
	printf("\n Enter a Sentence : ");
	gets(str);
	
	while(str[i] != '\0')
	{
		if(str[i] == ' ')//space is a single character
		{
			wordcount++;
		}
		i++;
	}
	
	printf("\n number of words : %d",wordcount);
	return 0;
}
