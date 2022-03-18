#include <stdio.h>

int tekSayi(int dizi[], int eleman){
	if (eleman <=0){
		return 0;
	}
	else{
		if(dizi[eleman] %2 == 1){
			return 1 + tekSayi(dizi, eleman -1);
		}
		else{
			return tekSayi(dizi, eleman - 1);
		}
	}
}

int main(){
	int dizi[6] = {1, 4, 8, 9, 15, 58};
	int adet = 0;
	
	adet=tekSayi(dizi, 6);
	printf("%d adet tek sayi bulunmaktadir.", adet);
	
	return 0;
	
}
