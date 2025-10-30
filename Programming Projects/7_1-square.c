#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter an number: ");
    scanf("%d", &n);

    for (long int i = 1; i <= n; i++)
    {
        printf("%10ld%10ld\n", i, i * i);
    }

    // least value of n for i * i to overflow
    // int - 46341 (32-bit)
    // short int - 181 (16-bit)
    // long int - 46341 (32-bit) (windows)

    return 0;
}