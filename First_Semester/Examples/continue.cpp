#include <stdio.h>

int main() {
    int i;
    int n = 0; 
    int toplam = 0;	
    
    while (n < 10) {
        scanf("%d", &i);
        if (i == 0) continue; 
        n++; 
        toplam += i;
    } 
    printf("Girilen sayilarin toplami: %d\n", toplam);
    return 0;
}

