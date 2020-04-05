/*
 * Examples of printf and using % for different variable types
 *
 */


#include <stdio.h>

int main(void)
{
    int integerVar = 100;
    float floatingVar = 331.793;
    double doubleVar = 9.3443e+11;
    char charVar = 'W';

    _Bool boolVar = 0;

    printf("integerVar = %i\n",integerVar);
    printf("floatingVar = %f\n",floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);

    return 0;
}
