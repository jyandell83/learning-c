#include <stdio.h>
// Playing with some functions to help cement knowledge of char arrays / strings

// Takes string as input and calculates the number of chars

int determineCharNumberInString (char inputStr[]) {

    int countOfChars = 0;

    for (int i = 0; inputStr[i] != '\0'; ++i)
        countOfChars++;

    return countOfChars;
}

// Concatenates 2 strings

// Determines if two strings are equal
int main()
{
    char test[20]; 

    printf("Please enter a word (under 20 letters) for analysis: ");
    scanf("%s", test);

    printf("%s contains %d characters\n", test, determineCharNumberInString(test));

    return 0;
}
