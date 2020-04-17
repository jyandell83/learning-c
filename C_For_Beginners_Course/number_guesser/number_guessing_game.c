/*
 * A number guessing game, user tries to guess a number from 0 - 20.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    int tries = 5;
    int guess;
    int randomNumber;
    _Bool success = 0;
    char ready;

    // This makes a random number between 0 - 20
    srand((unsigned) time(&t));
    randomNumber = rand() % 21;

    printf("Welcome to the most exciting game you have ever played!\n");
    printf("I have chosen a number between 0 - 20, you have %d tries?\n", tries);


    // This asks user to begin to play
    do {
        printf("Are you ready to play? Y/N\n");
        scanf(" %c", &ready);
    } while (ready != 'Y');

    return 0;
}
