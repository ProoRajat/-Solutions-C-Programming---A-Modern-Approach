#include <stdio.h>

int main(void)
{
    int dollar = 0, cent = 0;

    printf("Enter Dollars: ");
    scanf("%d", &dollar);
    printf("Enter cents: ");
    scanf("%d", &cent);

    float money = dollar + (cent / 100);

    printf("Amount after 5%% tax: %.2f", money + money / 20.0f);


    return 0;
}