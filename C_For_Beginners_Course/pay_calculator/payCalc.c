/*
 * Takes a user input of hours and prints Pay
 */

#include <stdio.h>

#define PAY_RATE 12.00
#define TAX_1 .15
#define TAX_2 .2
#define TAX_3 .25

int main()
{
    float hours, grossPay, taxes, netPay;

    printf("Please enter your hours worked in a week: ");
    scanf("%f", &hours);

    printf("Total Hours: %.2f\n", hours);

    return 0;
}
