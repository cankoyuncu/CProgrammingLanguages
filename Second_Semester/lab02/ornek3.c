#include <stdio.h>

//Rekursif ile basamak toplami

int req_basamak(int sayi){
	
	if (sayi==0){
	return 0;
	}
	return (sayi%10 + req_basamak(sayi/10));
}

int main(){
	int sayi;
	
	printf("Basamaklari toplanacak sayiyi giriniz:\n");
	scanf("%d", &sayi);
	
	printf("%d sayisinin basamaklari toplami: %d", sayi, req_basamak(sayi));
	
	return 0;
}
