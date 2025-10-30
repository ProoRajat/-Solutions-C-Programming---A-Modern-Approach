#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char cordinates[10][10], character = 'A';
    int i = 0, j = 0;
    srand(time(NULL));

    for(int x = 0; x < 10; x++)
        for(int y = 0; y < 10; y++)
            cordinates[x][y] = '.';
    
    cordinates[i][j] = character;
        character++;
    
    while(character <= 'Z')
    {
        // direction: up - 0, down - 1, right - 2, left - 3
        int direction = rand() % 4;
        
        if (direction == 0 && i > 0 && cordinates[i - 1][j] == '.') // up
            i--;
        else if (direction == 1 && i < 9 && cordinates[i + 1][j] == '.') // down
            i++;
        else if (direction == 2 && j < 9 && cordinates[i][j + 1] == '.') // right
            j++;
        else if (direction == 3 && j > 0 && cordinates[i][j - 1] == '.') // left
            j--;
        else
        {
            int canMove = 0;
            if (i > 0 && cordinates[i - 1][j] == '.') // up
                canMove = 1;
            if (j < 9 && cordinates[i][j + 1] == '.') // right
                canMove = 1;
            if (i < 9 && cordinates[i + 1][j] == '.') // down
                canMove = 1;
            if (j > 0 && cordinates[i][j - 1] == '.') // left
                canMove = 1;
            if (!canMove)
                break; // no more moves possible
            continue; // try another direction
        }
        cordinates[i][j] = character;
        character++;
    }
    printf("\n");
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++)
            printf("%c ", cordinates[i][j]);
        printf("\n");
    }        

    return 0;
}