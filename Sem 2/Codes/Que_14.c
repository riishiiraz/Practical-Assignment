/*
    Que : 14| W.A.C.P. to create a file "data.txt" and write names of city in it using File Handling.
*/

#include <stdio.h>

void main()
{
    int n, i, ch;
    char city[20];

    FILE *file;
    file = fopen("data.txt", "w+");

    printf("Enter no. of cities to be witten : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter city name : ");
        scanf("%s", city);

        fputs(city, file);
        fputs("\n", file);
    }

    rewind(file);

    printf("\nInputted Cities Are : \n");

    while ((ch = fgetc(file)) != EOF)

    {
        printf("%c", ch);
    }

    fclose(file);
}