#include <stdio.h>
#define SIZE 5
int main(void){
    int i;
    double a[SIZE] = { 1.2, 3.4, 5.6, 7.8,9.0 };
    /* Dizi elemanlarını göster*/
    for(i = 0; i < SIZE; i++)
        printf("a[%d] = %.2lf\n", i, a[i]);
    
    return 0;
}