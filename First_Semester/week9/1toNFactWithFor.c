#include <stdio.h>

main(){
	int n;
	int counter = 1;
	int fact = 1;
	
	printf("N sayisini giriniz: ");
	scanf("%d", &n);
	
	for(counter = 1; counter <= n; counter++){
		fact = fact * counter;
	}
	
	printf("Girilen sayinin faktoriyeli: %d", fact);
}
