/*
    Que : 9| W.A.C.P. to reverse a Number using 'int rev(int);' .
*/

#include <stdio.h>

int rev(int);

void main()
{

    int Num, Rev;

    printf("Enter a Number : ");
    scanf("%d", &Num);

    Rev = rev(Num);

    printf("\nReverse of %d is %d", Num, Rev);
}

int rev(int num)
{
    int r = 0;
    for (num; num > 0; num /= 10)
    {
        r *= 10;
        r += (num % 10);
    }

    return r;
}