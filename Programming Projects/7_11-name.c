#include <stdio.h>

int main(void) {
    int flag1 = 0, flag2 = 0;
    char ch, first;
    printf("Enter a first and last name: ");

    do {
        ch = getchar();
        if (ch != ' ' && !flag1) {
            first = ch;
            flag1 = 1;
        }

        if (ch == ' ' && flag1)
            flag2 = 1;

        if (flag1 && flag2 && ch != ' ' && ch != '\n')
            putchar(ch);
    } while (ch != '\n');

    putchar(',');
    putchar(' ');
    putchar(first);
    putchar('.');

    return 0;
}