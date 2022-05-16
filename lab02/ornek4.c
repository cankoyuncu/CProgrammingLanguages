#include <stdio.h>

//Rekursif ile ebob hesaplama

int req_ebob(int sayi1, int sayi2){
	 while(sayi1!=sayi2){
	 	
	 	if(sayi1 > sayi2)
	 		return req_ebob(sayi1 - sayi2, sayi2);
	 	else
	 		return req_ebob(sayi1, sayi2 - sayi1);
	 }
	 return sayi1;
}

int main(){
	
	int sayi1, sayi2;
	
	printf("EBOB'unun bulunmasini istediginiz sayilari giriniz:\n\n");
	
	printf("Sayi 1: ");
	scanf("%d", &sayi1);
	
	printf("Sayi 2: ");
	scanf("%d", &sayi2);
	
	printf("%d ve %d sayilarinin EBOB'u: %d", sayi1, sayi2, req_ebob(sayi1,sayi2));
	
	return 0;
}
