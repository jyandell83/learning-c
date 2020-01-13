/*
** Determines the smallest number of bills to use for any dollar amount
*/

#include <stdio.h>

int main(void)
{
	int dollarAmount, twenties, tens, fives, ones;

	printf("Enter a dollar amount: ");
	scanf("%d", &dollarAmount);

	twenties = dollarAmount / 20;
	dollarAmount -= twenties * 20;
	printf("%i\n", dollarAmount);
	tens = dollarAmount / 10;
	dollarAmount -= tens * 10;

	fives = dollarAmount / 5;
	dollarAmount -= fives * 5;

	ones = dollarAmount;
	
	printf("$20 bills: %i\n", twenties);
	printf("$10 bills: %i\n", tens);
	printf("$5 bills: %i\n", fives);
	printf("$1 bills: %i\n", ones);
}
