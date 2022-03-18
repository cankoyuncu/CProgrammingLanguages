#include <stdio.h>

//N sayisina kadar girilen sayilarin rekursif ile toplami

int toplam(int n){
	
	if (n==0) {
		return 0;
	}
	else{
		return n + toplam(n-1);
	}
}

int main(){
	
	int sayi;
	
	printf("N sayisi giriniz:\n");
	scanf("%d", &sayi);
	
	printf("%d", toplam(sayi));
	
	return 0;
}
