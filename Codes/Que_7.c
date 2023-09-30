/*
    Que : 7| W.A.C.P. to swap two variables values using pointer.
*/

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

void main()
{
    int a = 5, b = 8;

    printf("Before swapping :\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    swap(&a, &b);

    printf("After swapping :\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}
