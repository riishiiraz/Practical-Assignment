/*
    Que : 5| W.A.C.P. to perform multiplication on two matrices.
*/

#include <stdio.h>

#define r1 3
#define c1 2
#define r2 2
#define c2 3

void main()
{

    int M1[r1][c1], M2[r2][c2], Product[r1][c2];

    int i, j, k;

    printf("\nEnter Items for first Matrix of [%dx%d]: \n", r1, c1);

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Element [%d,%d] : ", i, j);
            scanf("%d", &M1[i][j]);
        }
    }

    printf("\n\nEnter Items for second Matrix of [%dx%d] : \n", r2, c2);

    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Element [%d,%d] : ", i, j);
            scanf("%d", &M2[i][j]);
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            Product[i][j] = 0;

            for (k = 0; k < r2; k++)
            {
                Product[i][j] += (M1[i][k] * M2[k][j]);
            }
        }
    }

    printf("\nProduct : \n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", Product[i][j]);
        }
        printf("\n");
    }
}