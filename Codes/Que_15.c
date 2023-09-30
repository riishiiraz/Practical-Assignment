/*
    Que : 15| W.A.C.P. to input a number and print it in words.
*/

#include <stdio.h>

int reverse(int num)
{
    int r = 0;
    while (num > 0)
    {
        r = ((r * 10) + num % 10);
        num /= 10;
    }
    return r;
}

void main()
{
    int num, rev;

    const char *Digits[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    printf("Enter a number : ");
    scanf("%d", &num);

    rev = reverse(num);

    printf("\n%d in words is : ", num);

    for (; rev > 0; rev /= 10)
    {
        printf("%s ", Digits[rev % 10]);
    }
}