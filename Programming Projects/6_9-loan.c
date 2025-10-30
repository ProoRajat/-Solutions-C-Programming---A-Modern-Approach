#include <stdio.h>

int main(void)
{
    float loanAmount, interestRate, monthlyPay, numberOfPayments;

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly pay: ");
    scanf("%f", &monthlyPay);
    printf("Enter number of payments: ");
    scanf("%f", &numberOfPayments);

    for (int i = 0; i < numberOfPayments; i++) {
        float monthlyInterestRate = interestRate / 12;
        loanAmount = loanAmount * (1 + monthlyInterestRate / 100) - monthlyPay;
        printf("Balance remaining after payment %d: $%.2f\n", i + 1, loanAmount);
    }
    
    return 0;
}