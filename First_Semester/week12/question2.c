#include <stdio.h>

void asal(int sayi){
    int sayac = 0;
    int i = 0;
    for(i = 2; i < sayi; i++){
        if(sayi % i == 0){
            sayac++;
        }
    }
    if (sayac==0){
        printf("%d sayisi asal sayidir.",sayi);
    }
    else{
        printf("%d sayisi asal sayi degildir.",sayi);
    }
    
}

main(){
    int sayi;

    printf("Sayi giriniz: ");
    scanf("%d", &sayi);

    asal(sayi);
}