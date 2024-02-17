/*
    Que : 1| W.A.C.P. to input an array of N numbers and find summation of it.
*/

#include <stdio.h>

#define N 5

void main(){

    int array [N] , sum=0 ,i=0;

    for ( ; i<N ; i++){

        printf("Enter Array [%d] : " , i);

        scanf("%d" , &array[i] );

    }

    for ( i=0 ; i<N ; i++)
        sum += array [i];

    printf("\nSum = %d",sum);

}