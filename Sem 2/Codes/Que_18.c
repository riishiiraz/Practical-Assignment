/*
    Que : 18| W.A.C.P. to input a number and perform left shift by 3 bits.
*/

#include <stdio.h>

#define SHIFT 3

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
    int num;

    printf("\nEnter a number : ");
    scanf("%d", &num);

    printf("Binary of %d                : ",num);
    printBinary(num);

    printf("\nLeft shift by %d bits is %d : ", SHIFT, num << SHIFT);
    printBinary(num<<SHIFT);
}