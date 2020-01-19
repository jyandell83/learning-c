/*
 ** Formats a date from mm/dd/yyyy to yyyymmdd
 */

#include <stdio.h>

int main(void)
{
		int month, day, year;

		printf("Enter a date (mm/dd/yyyy): ");
		scanf("%d/%d/%d", &month, &day, &year);

		printf("You entered the date %4d%02d%2d\n", year, month, day);

}
