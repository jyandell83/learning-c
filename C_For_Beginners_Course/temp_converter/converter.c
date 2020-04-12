#include <stdio.h>

int main()
{
    double fahrenheit, celsius;

    printf("Enter a temperature in fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2lf degree Fahrenheit is %.2lf degrees Celsius\n", fahrenheit, celsius);

    return 0;
}
