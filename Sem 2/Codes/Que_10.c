/*
    Que : 10| W.A.C.P. to count vowels in inputted string.
*/

#include <stdio.h>

int isVowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' \
            || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') \
            ? 1 : 0;
}

int countVowels(char *str)
{
    int c = 0;

    do
    {
        c += isVowel(*str);
    } 
    while (*(str++));

    return c;
}

void main()
{
    char string[20];
    int vowels;

    printf("Enter a String : ");
    scanf("%s", string);

    vowels = countVowels(string);

    printf("\nTotal Vowels : %d\n", vowels);
    

}