#include <stdio.h>

int main(){

    char str[100];
    char rev[100];
    char *sptr = str; 
    char *rptr = rev;

    int i = -1;

    printf("Ifadeyi giriniz: ");
    scanf("%s", str);

    while(*sptr){
        sptr++;
        i++; 
    }

    while(i >= 0){

        sptr--;
        *rptr = *sptr;
        rptr++; 
        i--;
    }

    *rptr = '\0'; 
    rptr = rev; 

    while(*rptr){
        *sptr = *rptr;
        sptr++;
        rptr++;
    }

    printf("\nIfadenin ters cevrilmis hali: %s ", str);
    return 0;
}
