#include <stdio.h>

#define line 3
#define column 3

main(){
    int i,j,N;

    int A[line][column] = {};

    int B[line][column] = {};

    int C[line][column];

    printf("Enter the elements of the array: ");
    scanf("%d", &N);

    puts("A Matrix: ");
    for ( i = 0; i < line; i++){
        for(j = 0; j < column; j++)
            printf("A[%4d]",A[i][j]);
        printf("\n");
    }

    puts("B Matrix: ");
    for ( i = 0; i < line; i++){
        for(j = 0; j < column; j++)
            printf("B[%4d]",B[i][j]);
        printf("\n");
    }

    puts("\nC Matrix:"); 
    for ( i = 0; i < line; i++){
        for(j = 0; j < column; j++){
            C[i][j] = A[i][j] + B[i][j];
            printf("%4d",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}