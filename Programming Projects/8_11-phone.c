#include <stdio.h>

int main(void)
{
    char ch, phone[15];

    printf("Enter phone number: ");

    for (int i = 0; i < 15; i++) {
        ch = getchar();
        phone[i] = ch;

        if (phone[i] == '\n'){
            phone[i] = '\0';
            break;
        }
    }

    printf("In numeric form: ");

    for (int i = 0; phone[i] != '\0'; i++) {
        switch (phone[i]) {
        case 'A':
        case 'B':
        case 'C':
            phone[i] = '2';
            break;
        case 'D':
        case 'E':
        case 'F':
            phone[i] = '3';
            break;
        case 'G':
        case 'H':
        case 'I':
            phone[i] = '4';
            break;
        case 'J':
        case 'K':
        case 'L':
            phone[i] = '5';
            break;
        case 'M':
        case 'N':
        case 'O':
            phone[i] = '6';
            break;
        case 'P':
        case 'R':
        case 'S':
            phone[i] = '7';
            break;
        case 'T':
        case 'U':
        case 'V':
            phone[i] = '8';
            break;
        case 'W':
        case 'X':
        case 'Z':
            phone[i] = '9';
            break;
        }

        printf("%c", phone[i]);
    }

    return 0;
}