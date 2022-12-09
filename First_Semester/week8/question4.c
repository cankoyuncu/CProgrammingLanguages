#include <stdio.h>

int main(){
	int n;
	
	printf("Sicakligi giriniz: ");
	scanf("%d", &n);
	
		if(n>0) {
	    	printf("Donma noktasinin ustundesiniz.");
	}
	
	else {
	    printf("Donma noktasinin altindasiniz.");
	}
}
