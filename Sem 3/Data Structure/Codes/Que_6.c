/*
    Que : 6| W.A.P. to Implement Binary Search.
*/

#include <stdio.h>

#define SIZE 10

int binarySearch(int* array, int key, int size){
    
    int high = size-1;
    int low = 0;
    int mid;

    while (high>=low)
    {
        mid = low + (high-low)/2;

        if(array[mid] == key)
            return mid;

        else if(array[mid]<key){
            low = mid+1;
        }
        else if(array[mid]>key){
            high = mid-1;
        }
    }
    return -1;
}

void main(){
    int array[SIZE] = {0,2,4,5,6,7,9,10,13,16};

    printf("Given Array : ");
    for(int i=0; i<SIZE; i++){
        printf("%d, ",array[i]);
    }

    int toBeSearched, result;

    printf("\n\nEnter item to search : ");
    scanf("%d",&toBeSearched);

    result = binarySearch(array, toBeSearched, SIZE);

    if(result<0)
        printf("Given element NOT found in Array.");
    
    else
        printf("Element found at %d Position.",result);
}