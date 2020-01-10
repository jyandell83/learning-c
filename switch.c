#include <stdio.h>
#include <stdlib.h>

/*
** An example of a switch statement in C
*/

int main() {
    
    char grade;

    printf("Enter a grade (A, B, C, D, or F): ");
    scanf(" %c", &grade);

    switch(grade) {
        case 'A' :
            printf("You did great!\n");
            break;
        case 'B' :
            printf("You did alright!\n");
            break;
        case 'C' :
            printf("You did poorly!\n");
            break;
        case 'D' :
            printf("You did very bad\n");
            break;
        case 'F' :
            printf("You Failed!\n");
            break;
        default :
            printf("Invalid Grade\n");
    }

    return 0;
}