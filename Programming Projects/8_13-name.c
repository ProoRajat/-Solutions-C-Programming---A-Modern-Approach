#include <stdio.h>

int main(void) {
    int flag1 = 0, flag2 = 0, i = 0;
    char ch, first, lastname[20];
    printf("Enter a first and last name: ");

    while (1) {
        ch = getchar();
        if (ch != ' ' && !flag1) {
            first = ch;
            flag1 = 1;
        }

        if (ch == ' ' && flag1)
            flag2 = 1;

        if (flag1 && flag2 && ch != ' ' && ch != '\n'){
            lastname[i] = ch;
            i++;
        }
        
        if (ch == '\n'){
            lastname[i] = '\0';
            break;
        }
    }

    printf("You entered the name: ");
    for (int i = 0; lastname[i] != '\0'; i++)
        putchar(lastname[i]);
    putchar(',');
    putchar(' ');
    putchar(first);
    putchar('.');

    return 0;
}