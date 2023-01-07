#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int hesapla(int a, int b){

}




main(){
    int a,b;
    while(1){
        printf("A nedir?"); scanf("%d", &a);
        printf("B nedir?"); scanf("%d", &b);
        printf("%d\n\n", hesapla(a,b));

        if(a==0 && b==0)
            break;
            //exit(0);
    }
}