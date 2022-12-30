#include <stdio.h>

main(){
    int i, N, A[99], B[99], C[99];
    printf("Enter the elements of the array: ");
    scanf("%d", &N);
    for(i=0; i<N; i++){
        printf("A[%d]=",i);
        scanf("%d", &A[i]);
    }
    for(i=0; i<N; i++){
        printf("B[%d]=",i);
        scanf("%d", &B[i]);
    }
    for(i=0; i<N; i++){
        C[i] = A[i] + B[i];
        printf("C[%d]=%d\n",i, C[i]);
    }
    return 0;
}