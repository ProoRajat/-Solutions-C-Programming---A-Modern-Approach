#include <stdio.h>

int main(void)
{
    int matrix[5][5];

    printf("Enter grades for student 1: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &matrix[0][i]);
    printf("Enter grades for student 2: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &matrix[1][i]);
    printf("Enter grades for student 3: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &matrix[2][i]);
    printf("Enter grades for student 4: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &matrix[3][i]);
    printf("Enter grades for student 5: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &matrix[4][i]);

    for (int i = 0; i < 5; i++)
    {
        printf("Student %d:\n", i + 1);
        int row_total = 0;
        for (int j = 0; j < 5; j++)
            row_total += matrix[i][j];
        printf("Total: %d\n", row_total);
        printf("Average: %.2f\n", row_total / 5.0);
        printf("\n");
    }

    for (int j = 0; j < 5; j++)
    {
        printf("Quiz %d:\n", j + 1);
        int col_total = 0, max = matrix[0][j], min = matrix[0][j];
        for (int i = 0; i < 5; i++)
        {
            col_total += matrix[i][j];
            if (matrix[i][j] > max)
                max = matrix[i][j];
            if (matrix[i][j] < min)
                min = matrix[i][j];
        }
        printf("Average: %.2f\n", col_total / 5.0);
        printf("High score: %d\n", max);
        printf("Low score: %d\n", min);
        printf("\n");
    }
    printf("\n");
    return 0;
}