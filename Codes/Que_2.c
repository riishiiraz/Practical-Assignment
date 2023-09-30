/*
    Que : 2| W.A.C.P. to sort an array of N limit in ascendind order.
*/

#include <stdio.h>

#define N 5

void main(){

    int array [N] ,i=0 ,j ,temp;

    for ( ; i<N ; i++){

        printf("Enter Array [%d] : " , i);

        scanf("%d" , &array[i] );

    }


    for (i=0 ; i< N-1 ; i++){
        for (j=i+1 ; j<N ; j++){

            if (array[i]>array[j]){

                temp = array[i];
                array[i] = array[j];
                array[j] = temp;

            }

        }
    }

    printf("\nSorted Array :  ");

    for (i=0 ; i< N ; i++){
        printf("%d, ",array[i]);
    }



}