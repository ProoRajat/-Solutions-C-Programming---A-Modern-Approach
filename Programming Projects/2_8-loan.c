#include <stdio.h>

int main(void)
{
    float loanAmount, interestRate, monthlyPay;

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly pay: ");
    scanf("%f", &monthlyPay);

    float monthlyInterestRate = interestRate / 12;

    float afterFirst = loanAmount * (1 + monthlyInterestRate / 100) - monthlyPay;
    float aftersecond = afterFirst * (1 + monthlyInterestRate / 100) - monthlyPay;
    float afterthird = aftersecond * (1 + monthlyInterestRate / 100) - monthlyPay;

    printf("Balance remaining after first payment: $%.2f\n", afterFirst);
    printf("Balance remaining after second payment: $%.2f\n", aftersecond);
    printf("Balance remaining after third payment: $%.2f\n", afterthird);
    return 0;
}