#include <stdio.h>
#define SIZE 5

int main(){
    int table[10][2];
    int i,j;
    for (i = 0; i <10; i++){
        
        printf("%d no'lu ogrencinin kilosu: ",(i+1));
        scanf("%d", &table[i][0]);

        printf("%d no'lu ogrencinin boyu: ",(i+1));
        scanf("%d", &table[i][1]);
        
    }

    for(i = 0; i < table; i++)
        printf("table[%d] = %.2lf\n", i, table[i]);

    return 0;
}