//Modify the program to find the longest word in the sentence.


#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], word[50], longest[50];
    int i=0,j=0,max=0,count=0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            if(j > 0)
            {
                word[j] = '\0';     // end the word
                count++;            // word count

                if (j>max)        // check for longest word
                {
                    max = j;
                    strcpy(longest, word);
                }

                j = 0; // reset for next word
            }

            if (str[i] == '\0')
                break;
        }
        i++;
    }

    printf("\nTotal words: %d", count);
    printf("\nLongest word: %s", longest);

    return 0;
}

