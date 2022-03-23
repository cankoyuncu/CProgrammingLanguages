#include <stdio.h>

//Rekursif ile girilen sayilarin en buyugunu bul

int req_en_buyuk(int sayilar[], int i){
	if(i-1==0){
		return sayilar[0];
	}
	if(sayilar[i-1] >req_en_buyuk(sayilar,i-1)){
		return sayilar[i-1];
	}
	else{
		return req_en_buyuk(sayilar,i-1);
	}
}


int main(){
	
	int sayilar[500], sayi;
	int i=0;
	
	printf("En buyuk elemanin bulunmasi icin sayilar giriniz:\n\n");
	printf("(Bitirdiginizde '-1' tusuna basiniz)\n");
	
	scanf("%d", &sayi);
	
	while(sayi != -1){
		sayilar[i] = sayi;
		i++;
		scanf("%d", &sayi);
	}
	
	printf("Girilen sayilardan en buyugu: %d", req_en_buyuk(sayilar,i));
	
	return 0;
}
