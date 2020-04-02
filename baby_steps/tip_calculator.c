#include <stdio.h>

int main(void)
{
	float amount, tipPercent;

	printf("Enter an amount: ");
	scanf("%f", &amount);
	
	printf("Enter a tip percent: ");
	scanf("%f", &tipPercent);

	printf("Total plus tip: %.2f\n", amount + (amount * (tipPercent / 100)));

	return 0;
}
