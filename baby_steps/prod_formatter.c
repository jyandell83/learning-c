#include <stdio.h>

/*
** Formats product information inputted by user
*/

int main(void)
{
    int itemNumber, month, day, year;
    float unitPrice;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);

    printf("Enter unit price: ");
    scanf("%f", &unitPrice);

    printf("Enter purchase date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("%-d\t$%6.2f\t%d/%d/%d\n", itemNumber, unitPrice, month, day, year);

    return 0;
}
