#include <stdlib.h>
#include <stdio.h>

int strLen(char a[]){
    int i = 0 ;
    while (a[i] != '\0'){
        i++;
    }
    return i;
}

void reverse(char a[],int len){
    char temp;
    int i;
    for (i = 0; i < len/2; i++){
        temp = a[i];
        a[i] = a[len-1-i];
        a[len-1-i] = temp;
    }
}

void writeInfo(){
    char a[100];
    printf("Deger girin");
    scanf("%s",a);

    int lenght = strLen(a);
    reverse(a,lenght);

    printf("Uzunluk: %d\tTers string: %s",lenght,a);
}


void main(){
    writeInfo();
}
