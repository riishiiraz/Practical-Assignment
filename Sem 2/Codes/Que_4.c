/*
    Que : 4| W.A.C.P. to input a matrix of m×n and print them.
*/

#include <stdio.h>

#define M 3
#define N 3

void main()
{
    int matrix[M][N];

    int i, j;

    printf("\nInput for Matrix %dx%d\n",M,N);

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Enter Element for [%d,%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nPrinting Inputed Matrix : \n");

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}