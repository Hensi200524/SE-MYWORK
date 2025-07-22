/*Write a C++ program that asks the user to guess a number between 1 and 100. The
program should provide hints if the guess is too high or too low. Use loops to allow
the user multiple attempts.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    int secret,guess;

    srand(time(0));  // Seed for random number
    secret = rand()%100+1;  // Random number between 1 and 100

    cout <<"Guess a number between 1 and 100:\n";

    while (true) 
	{
        cout <<"Enter your guess: ";
        cin >>guess;

        if (guess<secret) {
            cout <<"Too low!\n";
        } else if (guess>secret) {
            cout <<"Too high!\n";
        } else {
            cout <<"Correct! You guessed the number.\n";
            break;
        }
    }

    return 0;
}

