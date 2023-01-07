#include <stdio.h>

int hesapla(int vize, int final){

    int sonuc = (vize * 0.4) + (final * 0.6);
    return sonuc;
}

int main(){
    int vize,final,sonuc;

    sonuc = hesapla(vize, final);

    printf("Vize notunu giriniz: ");
    scanf("%d", &vize);

    printf("Final notunu giriniz: ");
    scanf("%d", &final);

    printf("Ortalamaniz: %d\n", hesapla(vize, final));

    if(hesapla(vize, final) > 35){
        printf("Tebrikler dersi gectiniz.");
    }
    else
        printf("Dersten kaldiniz");

    return 0;
}