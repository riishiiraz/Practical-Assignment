/*
    Que : 8| W.A.C.P. to input and print array using DMA.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{

    int size, i;
    int *array;

    printf("Enter the size for Array : ");
    scanf("%d", &size);

    array = (int *)malloc(sizeof(int) * size);

    for (i = 0; i < size; i++)
    {
        printf("Enter Array [%d] : ", i);
        scanf("%d", (array + i));
    }
    
    printf("\nInputted Array : [ ");

    for (i = 0; i < size; i++)
    {
        printf("%d, ", *(array + i));
    }
    printf("]\n");
}