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
    float hours, overtimeHours = 0, grossPay = 0, taxes = 0, netPay = 0;

    printf("Please enter your hours worked in a week: ");
    scanf("%f", &hours);

    if (hours > 40) {
        overtimeHours += (hours - 40);
        hours -= overtimeHours;
        grossPay += (hours * PAY_RATE) + (overtimeHours * (PAY_RATE * 1.5));
    } else {
        grossPay += hours * PAY_RATE;
    }


    printf("Total Hours: %.2f\n", hours + overtimeHours);
    printf("Total Pay: %.2f\n", grossPay);

    return 0;
}
