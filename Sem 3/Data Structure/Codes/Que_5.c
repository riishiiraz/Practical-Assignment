/*
    Que : 5| W.A.P. to Arrange elements in ascending order using Bubble Sort.
*/

#include <stdio.h>
#include <stdlib.h>

void printArray(int* array, int size){
    printf("\nArray [ ");
    for(int i=0; i<size; i++){
        printf("%d, ",array[i]);
    }
    printf("]\n");
}

void bubbleSort(int* array, int size){
    int temp;

    for(int i=0 ; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void main(){
    int size;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);

    int *array = malloc(sizeof(int)*size);

    printf("Enter Unsorted Array : \n");

    for (int i=0 ; i< size ; i++){
        printf("Array [%d] : ",i);
        scanf("%d",&(array[i]));
    }

    printf("\nBefore Sorting ");
    printArray(array, size);

    bubbleSort(array, size);

    printf("\nAfter Sorting ");
    printArray(array, size);
}

