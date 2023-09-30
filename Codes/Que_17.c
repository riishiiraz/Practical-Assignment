/*
    Que : 17| W.A.C.P. to input two numbers and perform bitwise AND, OR operation.
*/

#include <stdio.h>

void printBinary(int num)
{
    int mask;
    int ndigits = 16, i;

    for (i = ndigits; i >= 0; i--)
    {
        mask = 1 << i;

        if ((num & mask) == 0)
            printf("0");
        else
            printf("1");
    }
}

void main()
{

    int A, B, and, or ;

    printf("Enter First number : ");
    scanf("%d", &A);

    printf("Enter Second number : ");
    scanf("%d", &B);

    printf("\nBinary of %d is : ", A);
    printBinary(A);

    printf("\nBinary of %d is : ", B);
    printBinary(B);

    printf("\n%d & %d is %d   : ", A, B, A & B);
    printBinary(A & B);

    printf("\n%d | %d is %d   : ", A, B, A | B);
    printBinary(A | B);
}