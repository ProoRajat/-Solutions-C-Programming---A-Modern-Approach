#include <stdio.h>

int main(void)
{
    char sentence[100], terminatingChar;

    printf("Enter a sentence: ");

    int i;

    for (i = 0; i < 100; i++) {
        sentence[i] = getchar();
        if (sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?') {
            terminatingChar = sentence[i];
            i = i - 1;
            break;
        }
    }

    printf("Reversal of sentence: ");

    int flag = 0;
    for (int j = i; j >= 0; j--) {
        if (sentence[j] == ' ' || j == 0) {
            flag ? putchar(' ') : (flag = 1);
            int start = j == 0 ? 0 : j + 1;
            while (start <= i && sentence[start] != ' ' ) {
                putchar(sentence[start]);
                start++;
            }
        }
    }
    putchar(terminatingChar);
    return 0;
}