/*
    Que : 16| W.A.C.P. to find maximum of two numbers using Command Line Arguement.
*/

#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{

    if (argc < 2)
    {
        printf("\nNot Enough Arguements Passed !");
        return;
    }

    int a, b, max;

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    max = a;
    if (b > a)
        max = b;

    printf("\nMaximux number is : %d", max);
}