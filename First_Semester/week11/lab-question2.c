#include <stdio.h>

main(){
    int array1[3][3];
    int array2[3][3];
    int array3[3][3];
    int i,j;

    printf("Enter the first matrix: \n");
    for(i=0; i<3; i++)
    for(j=0; j<3; j++){
        printf("[%d][%d] = ", i+1, j+1);
        scanf("%d", &array1[i][j]);
    }

    printf("Enter the second matrix: \n");
    for(i=0; i<3; i++)
    for(j=0; j<3; j++){
        printf("[%d][%d] = ", i+1, j+1);
        scanf("%d", &array2[i][j]);
    }

    printf("Result: \n");
    for(i=0; i<3; i++)
    for(j=0; j<3; j++){
        array3[i][j] = array1[i][j] + array2[i][j];
        printf("[%d]", array3[i][j]);
    }
    printf("\n");
}


// #include <stdio.h>

// #define line 3
// #define column 3

// main(){
//     int i,j,N;

//     int A[line][column] = {N};

//     int B[line][column] = {N};

//     int C[line][column];

//     printf("Enter the elements of the array: ");
//     scanf("%d", &N);

//     puts("A Matrix: ");
//     for ( i = 0; i < line; i++){
//         for(j = 0; j < column; j++)
//             printf("A[%4d]",A[i][j]);
//         printf("\n");
//     }

//     puts("B Matrix: ");
//     for ( i = 0; i < line; i++){
//         for(j = 0; j < column; j++)
//             printf("B[%4d]",B[i][j]);
//         printf("\n");
//     }

//     puts("\nC Matrix:"); 
//     for ( i = 0; i < line; i++){
//         for(j = 0; j < column; j++){
//             C[i][j] = A[i][j] + B[i][j];
//             printf("%4d",C[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }