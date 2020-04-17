/*
 * A number guessing game, user tries to guess a number from 0 - 20.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;

    srand((unsigned) time(&t));

    int randomNumber = rand() % 21;

    printf("%i", randomNumber);


    return 0;
}
