#include <stdio.h>
#define SIZE 5

int main(){
    int table[10][2];
    int i,j;
    int avgKilo = 0;
    int avgBoy = 0;
    for (i = 0; i <10; i++){
        
        printf("%d no'lu ogrencinin kilosu: ",(i+1));
        scanf("%d", &table[i][0]);

        printf("%d no'lu ogrencinin boyu: ",(i+1));
        scanf("%d", &table[i][1]);
        
    }

    for(i = 0; i < table; i++){
        printf("table[%d] = %.2lf\n", i, table[i]);
    }
    
    avgKilo = table[i][0] / i;
    avgBoy = table[i][1] / i;

    printf("Ortalama kilo: %d", avgKilo);
    printf("Ortalama boy: %d", avgBoy);

    return 0;
}