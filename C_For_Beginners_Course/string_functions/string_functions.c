#include <stdio.h>
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



    
int main()
{
    char stringInput[50];

    printf("Please enter a word (under 50 characters) to be reversified: ");
    scanf("%s", stringInput);

    reverseString(stringInput);

    return 0;
}
