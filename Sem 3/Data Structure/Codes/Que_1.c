/*
    Que : 1| W.A.P. to find whether a Matrix is Lower Traiangular Matrix or Not.
*/

#include <stdio.h>
#define N 3 // Change This Value to Change the dimension of the SQUARE Matrix.

void printMatrix(int matrix[N][N]){
    printf("Prinitng Matrix : \n");
    for (int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

int isLowerTriangularMatrix(int matrix[N][N]){
    for (int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(matrix[i][j] != 0)
                return 0;
        }
    }
    return 1;
}

void main(){
    
    int matrix[N][N];

    printf("Input for Matrix [%d %d]\n",N,N);

    for (int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("Enter Matrix [%d:%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    printMatrix(matrix);

    int result = isLowerTriangularMatrix(matrix);

    if(result)
        printf("Given Matrix is Lower Traiangular Matrix");

    else
        printf("Given Matrix is NOT Lower Traiangular Matrix");


}