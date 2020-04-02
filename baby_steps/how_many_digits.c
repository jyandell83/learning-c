#include <stdio.h>

/*
** Returns how many digits a number has up to 4 digit number
** Really just an excuse to practice if statement
*/

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 10) {
        printf("The %d has 1 digit\n", number);
    } else if (number < 100) {
        printf("The %d has 2 digits\n", number);
    } else if (number < 1000) {
        printf("The %d has 3 digits\n", number);
    } else {
        printf("The %d has 4 digits\n", number);
    }

    return 0;
}
