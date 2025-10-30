#include <stdio.h>

int main(void)
{
    int itemNumber, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase day (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tday\n%d\t$ %.1f\t%d/%d/%d\n", itemNumber, price, month, day, year);

    return 0;
}