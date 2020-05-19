#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    
void reverseString (char str[]) {
    
    int length = strlen(str);

    char reversedString[length];

    for (int i = 0; i < length; i++) {
        reversedString[i] = str[length - i - 1];
    }

    reversedString[length] = '\0';

    printf("%s\n", reversedString);

}

void sortStrings(char arr[25][50], int n) 
{ 
    char temp[100]; 
  
    // Sorting strings using bubble sort 
    for (int j=0; j<n-1; j++) 
    { 
        for (int i=j+1; i<n; i++) 
        { 
            if (strcmp(arr[j], arr[i]) > 0) 
            { 
                strcpy(temp, arr[j]); 
                strcpy(arr[j], arr[i]); 
                strcpy(arr[i], temp); 
            } 
        } 
    } 
} 

int main()
{
    char stringInput[50];
    int stringNumber;
    char stringArray[25][50];
    int i, j;

    printf("Please enter a word (under 50 characters) to be reversified: ");
    scanf("%s", stringInput);

    reverseString(stringInput);

    printf("Begin Bubble Sort\n");

    printf("Input number of strings: ");
    scanf("%d", &stringNumber);

    printf("Input string %d: \n", stringNumber);

    for (i = 0; i < stringNumber; i++) {
        scanf("%s", stringArray[i]);
    }


    sortStrings(stringArray, stringNumber);

    printf("The Strings appear after sorting: \n");

    for (i = 0; i < stringNumber; i++) {
        printf("%s<---\n", stringArray[i]);
    }
    return 0;
}
