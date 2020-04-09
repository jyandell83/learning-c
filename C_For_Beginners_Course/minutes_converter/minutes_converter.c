/*
 * takes input from user in minutes and converts to days and years
 */
#include <stdio.h>

int main()
{  
    double minutes, years, days;

    printf("Enter the number of minutes you would like to convert:");
    scanf("%lf", &minutes);

    years = minutes / (60 * 24 * 365);
    days = minutes / 60 / 24;

    printf("The number of days is %lf and the number of years is %lf\n", days, years);

    return 0;
}
