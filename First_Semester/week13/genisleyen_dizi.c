#include <stdio.h>

int main() {
    int array[10][10] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, k, n, result;

    printf("enter a number: "); scanf("%d",&n);
    if(n >= 8) {
        printf("too much!");
        return 0;
    }

    printf("\n\n");

    for(i=0 ; i<n ; i++) {
        for(j=0 ; j<i+3 ; j++) {
            result = 0;
            for(k=0 ; k<i+3 ; k++)
                result += array[k][j];

            array[i+3][j] = result;
        }

        for(j=0 ; j<i+3 ; j++) {
            result = 0;
            for(k=0 ; k<i+3 ; k++)
                result += array[j][k];

            array[j][i+3] = result;
        }
    }

    for(i=0 ; i<10 ; i++) {
        for(j=0 ; j<10 ; j++) {
            printf("%7d", array[i][j]);
        } 
        printf("\n\n\n");
    }

    return 0;
}
