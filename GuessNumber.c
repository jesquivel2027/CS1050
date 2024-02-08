// Number Guessing Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int randomNumber, guess, guessCount = 0;
time_t t;


// Initialize Random Number Generator
srand((unsigned) time(&t));

// Generate a random number between 1 and 100
randomNumber = rand() % 100 + 1;

printf("Guess the number (1 to 100):");

while(1) {
        scanf("%d", &guess);
        guessCount++;

        if(guess == randomNumber) {
            printf("Congratulations! You've guessed the number in %d tries!", guessCount);
            break; // Exit the loop
        } else if(guess < randomNumber) {
            printf("Your guess is too low. Try again.");
        } else {
            printf("Your guess is too high. Try again.");
        }
    }

    return 0;
}