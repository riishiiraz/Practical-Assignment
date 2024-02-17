/*
    Que : 6| W.A.C.P. to input an Number and find summation of all Even position digits and Odd position digits.
*/

#include <stdio.h>

void main()
{

    int Num, digit, i, sumEven = 0, sumOdd = 0;

    printf("Enter the Number : ");
    scanf("%d", &Num);

    for (i = 1; Num > 0; Num /= 10, i++)
    {
        digit = Num % 10;

        if (i % 2 == 0)
        {
            sumEven += digit;
        }
        else
        {
            sumOdd += digit;
        }
    }

    printf("\nSum of Even position digits : %d", sumEven);
    printf("\nSum of Odd position digits : %d", sumOdd);
}