#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int vowelCount = 0;

    printf("Enter a sentence: ");

    do {
        ch = getchar();

        switch (toupper(ch))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            vowelCount++;
            break;
        }
        
    } while (ch != '\n');

    printf("Your sentence contains %d vowels.", vowelCount);

    return 0;
}