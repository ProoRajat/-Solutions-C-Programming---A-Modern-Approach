#include <stdio.h>

int main(void)
{
    float dollar;
    
    printf("Enter a dollar amount: ");
    scanf("%f", &dollar);

    int bill20 = dollar/20;
    dollar = dollar - bill20 * 20;
    int bill10 = dollar/10;
    dollar = dollar - bill10 * 10;
    int bill5 = dollar/5;
    dollar = dollar - bill5 * 5;
    int bill1 = dollar;

    printf("$20 bills: %d\n", bill20);
    printf("$10 bills: %d\n", bill10);
    printf(" $5 bills: %d\n", bill5);
    printf(" $1 bills: %d\n", bill1);

    return 0;
}