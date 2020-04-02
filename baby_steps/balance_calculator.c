/*
** Calculates the balance of a loan for 3 months
*/

#include <stdio.h>


/*
** Helper function to calculate monthly balance
*/

float calculateBalance(float bal, float pay, float rate)
{
	float increase = bal * rate / 100.0;
	float change = pay - increase;
	bal -= change;
	return bal;
}

int main(void)
{
	float loan, yearlyInterest, monthlyInterest, payment, balance;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);

	printf("Enter the annual interest rate: ");
	scanf("%f", &yearlyInterest);

	printf("Enter the monthly payment: ");
	scanf("%f", &payment);

	monthlyInterest = yearlyInterest / 12.0;

	balance = loan;
	
	balance = calculateBalance(balance, payment, monthlyInterest); 
	printf("Month 1 balance: $%.2f\n", balance);
	balance = calculateBalance(balance, payment, monthlyInterest); 
	printf("Month 2 balance: $%.2f\n", balance);
	balance = calculateBalance(balance, payment, monthlyInterest); 
	printf("Month 3 balance: $%.2f\n", balance);
	
}
