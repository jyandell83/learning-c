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

void concatsTwoStrings (char result[], char str1[], char str2[]) {
    
    int index = 0;

    for (int i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
        index++;
    }


    for (int j = 0; str2[j] != '\0'; ++j) {
        result[index++] = str2[j];
    }
    
}

// Determines if two strings are equal
int main()
{
    char test[20]; 

    printf("Please enter a word (under 20 letters) for analysis: ");
    scanf("%s", test);

    printf("%s contains %d characters\n", test, determineCharNumberInString(test));

    char test2[1000];
    concatsTwoStrings(test2, "cat", "dog");
    printf("%s this should say catdog\n", test2);
    return 0;
}
