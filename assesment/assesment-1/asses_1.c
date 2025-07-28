//assesment 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a string
void reverseString(char str[]) {
	int i;
    int len = strlen(str);
    printf("\nReversed string: ");
    for ( i = len - 1; i >= 0; i--)
        putchar(str[i]);
    printf("\n");
}

// Function to concatenate strings
void concatenateStrings(char str[]) {
    char str2[100];
    printf("Enter another string to concatenate: ");
    getchar(); // clear buffer
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // remove newline
    strcat(str, str2);
    printf("Concatenated String: %s\n", str);
}

// Function to check if a string is a palindrome
void checkPalindrome(char str[]) {
	int i;
    int len = strlen(str), flag = 1;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is NOT a Palindrome.\n");
}

// Function to copy a string
void copyString(char str[]) {
    char copy[100];
    strcpy(copy, str);
    printf("Copied String: %s\n", copy);
}

// Function to find the length of a string
void findLength(char str[]) {
    printf("Length of the string: %lu\n", strlen(str));
}

// Function to find frequency of a character
void frequencyOfChar(char str[]) {
    char ch;
    int i;
    int count = 0;
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);
    for (i = 0; str[i]; i++) {
        if (str[i] == ch)
            count++;
    }
    printf("Frequency of '%c' = %d\n", ch, count);
}

// Function to count vowels and consonants
void countVowelsConsonants(char str[]) {
	int i,s;
    int vowels = 0, consonants = 0;
    for (i = 0; str[i]; i++) {
        char c = tolower(str[i]);
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
}

// Function to count spaces and digits
void countSpacesDigits(char str[]) {
	int i;
    int spaces = 0, digits = 0;
    for (i = 0; str[i]; i++) {
        if (isspace(str[i]))
            spaces++;
        else if (isdigit(str[i]))
            digits++;
    }
    printf("Blank Spaces: %d, Digits: %d\n", spaces, digits);
}

// Menu function
void displayMenu() {
    printf("\n===== STRING OPERATIONS MENU =====\n");
    printf("1. Reverse a string\n");
    printf("2. Concatenation\n");
    printf("3. Palindrome\n");
    printf("4. Copy a string\n");
    printf("5. Length of the string\n");
    printf("6. Frequency of a character\n");
    printf("7. Count vowels and consonants\n");
    printf("8. Count blank spaces and digits\n");
    printf("9. Exit\n");
}

int main() {
    char str[100];
    int choice;
    char again;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    do {
        displayMenu();
        printf("Enter your choice (1-9): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                reverseString(str);
                break;
            case 2:
                concatenateStrings(str);
                break;
            case 3:
                checkPalindrome(str);
                break;
            case 4:
                copyString(str);
                break;
            case 5:
                findLength(str);
                break;
            case 6:
                frequencyOfChar(str);
                break;
            case 7:
                countVowelsConsonants(str);
                break;
            case 8:
                countSpacesDigits(str);
                break;
            case 9:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please select between 1 to 9.\n");
        }

        printf("\nDo you want to continue? (Y/N): ");
        scanf(" %c", &again);

    } while (again == 'Y' || again == 'y');

    printf("Thank you! Program ended.\n");
    return 0;
}

