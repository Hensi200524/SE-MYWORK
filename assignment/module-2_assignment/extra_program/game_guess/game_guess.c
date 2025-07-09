#include <stdio.h>
#include <conio.h>

int main() {
    int secret,guess,i;

    printf("Player 1, enter a number between 1 and 100: ");
    scanf("%d",&secret);

    // Clear screen or hide input manually for fairness (optional)

    printf("\n\n--- Player 2: Guess the number ---\n");

    for(i= 1;i<=5;i++) 
	{
        printf("Attempt %d: ",i);
        scanf("%d",&guess);

        if(guess == secret) {
            printf("\n Correct! You guessed the number in %d attempts.",i);
            break;
        } else if(guess < secret) {
            printf("\n Too low!\n");
        } else {
            printf("\n Too high!\n");
        }
    }

    if(guess != secret) {
        printf("\n Out of attempts! The correct number was %d.\n", secret);
    }

    return 0;
}

