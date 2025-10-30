#include <stdio.h>

int main(void)
{
    char word1[20], word2[20];
    printf("Enter first word: ");
    fgets(word1, 20, stdin);
    printf("Enter second word: ");
    fgets(word2, 20, stdin);

    int count[26] = {0};

    for (int i = 0; word1[i] != '\0' && word1[i] != '\n'; i++){
        char ch = word1[i];
        if (ch >= 'A' && ch <= 'Z')
            count[ch - 'A']++;
        else if (ch >= 'a' && ch <= 'z')
            count[ch - 'a']++;
    }
    for (int i = 0; word2[i] != '\0' && word2[i] != '\n'; i++){
        char ch = word2[i];
        if (ch >= 'A' && ch <= 'Z')
            count[ch - 'A']--;
        else if (ch >= 'a' && ch <= 'z')
            count[ch - 'a']--;
    }

    int areAnagrams = 1;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            areAnagrams = 0;
            break;
        }
    }
    if (areAnagrams)
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");
    return 0;
}