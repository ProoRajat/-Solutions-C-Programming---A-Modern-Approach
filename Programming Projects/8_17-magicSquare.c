#include <stdio.h>

int main(void)
{
    int squareSize;
    printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\nEnter size of magic square: ");
    scanf("%d", &squareSize);
    int square[99][99] = {0};

    int i = 0, j = squareSize/2, n = 1;

    while (n <= squareSize * squareSize)
    {
        square[i][j] = n++;
        int temp_i = i--, temp_j = j++;

        if (i < 0)
            i = squareSize - 1;

        if (j > squareSize - 1)
            j = 0;

        if (square[i][j] != 0){
            i = temp_i != n - 1 ? temp_i + 1 : 0;
            j = temp_j;
        }
    }

    for (int i = 0; i < squareSize; i++){
        for (int j = 0; j < squareSize; j++)
            printf("%2d  ", square[i][j]);
        printf("\n");
    } 

    return 0;
}