#include <stdio.h>

int toplam(int n){

	if (n == 0) {
		return 0;
	}
	else{
		return n + toplam(n - 1);
	}
}


int main(void){
	
	int sayi;
	
	printf("n sayisina kadar girilen sayilarin toplami:\n");
	scanf("%d", &sayi);
	
	printf("%d", toplam(sayi));
	
	return 0;
	
}
