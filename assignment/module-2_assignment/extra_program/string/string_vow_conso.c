/*Write a C program that takes a string from the user and counts the number of vowels and
consonants in the string. and Extend the program to also count digits and special characters*/

#include <stdio.h>
#include <conio.h>

int main()
{
	char str[100];
	
	int i=0,vowel=0,consonant=0,digit=0,special=0;
	
	printf("\n Enter a string : ");
	scanf("%s",&str);
	
	while(str[i] != '\0')
	{
		char ch = str[i];
		
			if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' ||
			ch == 'i' || ch == 'o' || ch == 'u')
			{
				vowel++;
			}
			else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
			{
				consonant++;
			}
			else if(ch>='0' && ch<='9')
			{
				digit++;
			}
			else
			{
				special++;
			}
		i++;
	}
	printf("\n number of voewl is : %d",vowel);
	printf("\n number of consonant is : %d",consonant);
	printf("\n number of digit is : %d",digit);
	printf("\n number of special is : %d",special);
	
	return 0;
}

