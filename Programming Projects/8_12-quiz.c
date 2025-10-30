#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int value = 0;
    int scrabbleValue[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    printf("Enter a word: ");
    
    do {
        ch = getchar();
        if (isalpha(ch))
            value += scrabbleValue[toupper(ch) - 'A'];
    } while ( ch != '\n' );

    printf("Scrabble value: %d\n", value);

    return 0;
}