#include <stdio.h>

int main(void)
{
    float smallNumber;
    float e = 1;
    printf("Enter a small number: ");
    scanf("%f", &smallNumber);

    float factorial;

    for (int i = 1; 1.00/factorial >= smallNumber; i++) {
        factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        } 
        e += 1.00/factorial;
    }

    printf("Value of e: %f", e);
    return 0;
}