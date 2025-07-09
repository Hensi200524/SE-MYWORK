/*Write a C program that implements a simple number guessing game. The program should
generate a random number between 1 and 100, and the user should guess the number
within a limited number of attempts.
• Challenge: Provide hints to the user if the guessed number is too high or too low*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number,guess,i;

    // Generate random number between 1 and 100
    srand(time(0));//Set the seed for random number
    number = (rand()%100)+1;

    printf("Guess a number between 1 and 100\n");

    for(i= 1;i<=5;i++) 
	{
        printf("Attempt %d: ",i);
        scanf("%d",&guess);

        if(guess == number) 
		{
            printf("Correct! You guessed the number in %d attempts.\n", i);
            break;
        } else if(guess<number) 
		{
            printf("Too low!\n");
        } 
		else 
		{
            printf("Too high!\n");
        }
    }

    if(guess!=number) 
	{
        printf("Sorry, you're out of attempts. The number was %d.\n", number);
    }

    return 0;
}

