#include <stdio.h>

void main()
{

    int A[50][50];
    int B[50][50];
    int result[50][50];
    int r1, c1, r2, c2;
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter matrix elements row by row:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.\n");
    }
    printf("Enter matrix elements row by row:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < c1; ++k)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}