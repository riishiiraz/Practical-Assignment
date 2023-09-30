/*
    Que : 19| W.A.C.P. to find the summation of first N numbers.
*/

#include <stdio.h>

void main()
{
    int N, sum = 0, i;

    printf("Enter N : ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        sum += i;
    }

    printf("\nSum of first %d numbers is %d", N, sum);
}