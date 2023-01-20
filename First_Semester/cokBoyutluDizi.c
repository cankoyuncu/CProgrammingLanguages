#include <stdlib.h>
#include <stdio.h>

void setAverage(int a[4][5])
{
    int i,j;

    for (i = 0; i < 4; i++){
        int toplam = 0;
        
        for (j = 1; j < 4 ; j++)
        {
            toplam += a[i][j];
        }
        toplam = toplam/3;
        a[i][j] = toplam;
    }

    for (i = 0; i < 4; i++){
        for (j = 0; j < 5; j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    
}

int highScore(int a[4][5]){
    int i, maks = 0, enYuksek;
    int j = 4;

    for (i = 0; i < 4; i++){
        if (a[i][j] > maks){
            maks = a[i][j];
            enYuksek = i;
        }
    }
    printf("%d idli ogrenci en yuksek sonucu almistir. Not: %d",enYuksek+1,maks);
}

void main(){
    int a[4][5] =  {{1,67,76,55},
                    {2,34,79,76},
                    {3,56,68,57},
                    {4,66,89,65}};
    
    setAverage(a);
    highScore(a);

}
