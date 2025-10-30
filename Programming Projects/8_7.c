#include <stdio.h>

int main(void)
{
    int matrix[5][5];

    printf("Enter row 1: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &matrix[0][i]);
    printf("Enter row 2: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &matrix[1][i]);
    printf("Enter row 3: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &matrix[2][i]);
    printf("Enter row 4: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &matrix[3][i]);
    printf("Enter row 5: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &matrix[4][i]);

    printf("Row totals: ");
    for (int i = 0; i < 5; i++)
    {
        int row_total = 0;
        for (int j = 0; j < 5; j++)
            row_total += matrix[i][j];
        printf("%d ", row_total);
    }
    printf("\n");

    printf("Column totals: ");
    for (int j = 0; j < 5; j++)
    {
        int col_total = 0;
        for (int i = 0; i < 5; i++)
            col_total += matrix[i][j];
        printf("%d ", col_total);
    }
    printf("\n");
    return 0;
}