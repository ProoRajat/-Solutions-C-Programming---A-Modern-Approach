#include <stdio.h>

int main(void)
{
    int alphabetCount = 0, spaceCount = 0;

    printf("Enter a sentence: ");
    
    char ch;
    do {
        ch = getchar();
        if (ch == ' ')
            spaceCount++;
        if (ch != ' ' && ch != '\n')
            alphabetCount++;
    } while (ch != '\n');

    printf("Average word length: %.1f\n", (float)alphabetCount / (spaceCount + 1));

    return 0;
}