#include <stdio.h>

int main(){
    int number1, number2;
    int total = 0;

    printf("A sayisini giriniz: ");
    scanf("%d", &number1);

    printf("B sayisini giriniz: ");
    scanf("%d", &number2);

    total = number1 + number2;

    printf("Girilen sayilarin toplami: %d", total);

    return 0;
}