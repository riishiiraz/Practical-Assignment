/*
    Que : 12| W.A.C.P. to Input a string and count total no. of Capital & Small Letters in it.
*/

#include <stdio.h>

void main()
{
    char str[20];
    int upper = 0, lower = 0, i;

    printf("Enter a String : ");
    scanf("%s", str);

    for (i = 0; str[i]; i++)
    {

        upper += (str[i] > 64 && str[i] < 91);
        lower += (str[i] > 96 && str[i] < 123);
    }

    printf("\nNumber of Uppercase : %d", upper);
    printf("\nNumber of Lowercase : %d", lower);
}