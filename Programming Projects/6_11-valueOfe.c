#include <stdio.h>

int main(void)
{
    int n;
    float e = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    float factorial;

    for (int i = 1; i <= n; i++) {
        factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        } 
        e += 1.00/factorial;
    }

    printf("Value of e: %f", e);
    return 0;
}