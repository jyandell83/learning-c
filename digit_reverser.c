#include <stdio.h>

/*
** Takes a three digit number and returns the reverse
*/

int main(void)
{
    int num, digit1, digit2, digit3;
    
    printf("Enter a three digit number: ");
    scanf("%d", &num);

    digit1 = num / 100;
    digit2 = (num % 100) / 10;
    digit3 = num % 10;

    printf("The reverse is %d%d%d\n", digit3, digit2, digit1);

    return 0;


}
