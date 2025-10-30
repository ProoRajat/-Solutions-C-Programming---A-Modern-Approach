#include <stdio.h>

int main(void)
{
    int numenator, denomenator;
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &numenator, &denomenator);

    int temp, num1 = numenator, num2 = denomenator;

    while (num2 != 0) {
        temp = num2;
        num2 = num1%num2;
        num1 = temp;
    }

    printf("In lowest terms: %d/%d", numenator/num1, denomenator/num1);

    return 0;
}