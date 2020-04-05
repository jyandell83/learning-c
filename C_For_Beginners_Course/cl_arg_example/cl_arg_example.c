/*
 * example of using command line arguments for a C program
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    int numOfArgs = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments: %d\n", numOfArgs);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is command line argument: %s\n", argument2);
    return 0;
}
