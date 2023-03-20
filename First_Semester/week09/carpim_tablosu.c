#include <stdio.h>

main(){
	int a;
	int b;
	
	printf("Carpim Tablosu \n\n\n");
	
	for (a = 1; a <= 10; a++){
		for (b = 1; b<=10; b++){
			printf("%d X %d = %d \t", b, a, a * b);
		}
		printf("\n");	
	}
}
