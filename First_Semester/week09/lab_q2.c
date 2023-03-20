#include <stdio.h>

main(){
	int n;
	int counter = 1;
	int fact = 1;
	
	printf("N sayisi giriniz: ");
	scanf("%d", &n);
	
	while(counter<=n){
		fact = fact * counter;
		counter++;
	}
	
	printf("Girilen sayinin faktoriyeli: %d", fact);	

}
