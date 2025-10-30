#include <stdio.h>

int main(void)
{
    char message[50];
    printf("Enter message: ");

    for (int i = 0; i < 50; i++)
    {
        message[i] = getchar();
        if (message[i] == '\n')
        {
            message[i] = '\0';
            break;
        }
    }

    printf("In B1FF-speak: ");
    for (int i = 0; message[i] != '\0'; i++)
    {
        char ch = message[i];
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 'a' + 'A';

        switch (ch)
        {
        case 'A':
            putchar('4');
            break;
        case 'B':
            putchar('8');
            break;
        case 'E':
            putchar('3');
            break;
        case 'I':
            putchar('1');
            break;
        case 'O':
            putchar('0');
            break;
        case 'S':
            putchar('5');
            break;
        default:
            putchar(ch);
            break;
        }
    }
    printf("!!!!!!!!!!\n");

    return 0;
}