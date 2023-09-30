/*
    Que : 3| Program to perform Binary Search on an Array.
*/

#include <stdio.h>

#define SIZE 10

void main()
{

    int array[SIZE] = {2, 4, 5, 8, 12, 15, 16, 17, 19, 20};

    int item, high, low, mid, i;

    printf("\nGiven Array : ");

    for (i = 0; i < SIZE; i++)
        printf("%d, ", array[i]);

    printf("\nEnter Item to Be Searched : ");
    scanf("%d", &item);

    low = 0;
    high = SIZE - 1;

    while (high > low)
    {
        mid = (high + low) / 2;

        if (array[mid] == item)
        {
            printf("Item Found at %d Position !", mid);
            return;
        }

        else if (item < array[mid])
            high = mid - 1;

        else if (item > array[mid])
            low = mid + 1;
    }

    printf("Item Not Found In Array !");
}