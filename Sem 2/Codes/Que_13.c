/*
    Que : 13| W.A.C.P. to input a MxN matrix and find the largest number in it.
*/

#include <stdio.h>

#define M 3
#define N 3

void main()
{
    int matrix[M][N], i, j, max;

    printf("\nInput for Matrix [%dx%d] \n", M, N);

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Enter Marix (%d,%d) : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    max = matrix[0][0];

    printf("\nInputted Matrix : \n");

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (matrix[i][j] > max)
                max = matrix[i][j];

            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nMaximum element is : %d", max);
}