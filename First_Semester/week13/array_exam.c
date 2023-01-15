#include <stdio.h>

printArray(int arr[][4]){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        } 
        printf("\n");
    }
}

main(){
    int dizi[5][4] = { 
                    {1,2,3,},
                    {4,5,6,},
                    {7,8,9,},
                    {1,2,3,},
                    {5,6,7,}};
    printArray(dizi);
    int i,j,toplam;
    for(i=0;i<5;i++){
        toplam = 0;
        for(j=0;j<3;j++){
            toplam += dizi[i][j];
        }
        dizi[i][3] = toplam;
    }
    printf("\n\n"); 
    printArray(dizi);
}


