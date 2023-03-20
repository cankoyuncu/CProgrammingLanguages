#include <stdio.h>

main(){
	int n;
	int counter = 1;
	int total = 0;
	
	printf("N sayisi giriniz: ");
	scanf("%d", &n);
	
	while(counter<=n){
		total = total + counter; // total += counter;
		counter++;
	}
	
	printf("Girilen sayilarin toplami: %d"	, total);	

}


