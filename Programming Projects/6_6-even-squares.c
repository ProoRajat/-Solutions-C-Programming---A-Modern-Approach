#include <stdio.h>

int main(void) {
    int number = 0;

    printf("Enter a integer: ");
    scanf("%d", &number);

    for (int i = 2; i*i <= number; i += 2) {
        printf("%d\n", i * i);
    }

    return 0;
}