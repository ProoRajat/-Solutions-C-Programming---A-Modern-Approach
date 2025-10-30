#include <stdio.h>

int main(void)
{
    char message[80], encryptedMessage[80];

    printf("Enter a message to be encrypted: ");
    int i = 0;
    while (1)
    {
        int ch = getchar();
        if (ch == '\n')
        {
            message[i++] = '\0';
            break;
        }
        message[i++] = ch;
    }

    int shift;
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    for (int j = 0; j < i; j++)
    {
        char ch = message[j];
        if (ch >= 'A' && ch <= 'Z')
        {
            encryptedMessage[j] = (((ch - 'A' + shift) % 26) + 'A');
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            encryptedMessage[j] = (((ch - 'a' + shift) % 26) + 'a');
        }
        else
        {
            encryptedMessage[j] = ch;
        }
    }
    printf("Encrypted message: %s\n", encryptedMessage);
    return 0;
}