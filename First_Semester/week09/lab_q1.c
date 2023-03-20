#include <stdio.h>

main(){
	int A,B,C;
	int max=0;
	
	printf("A sayisini giriniz: ");
	scanf("%d",&A);
	
	printf("B sayisini giriniz: ");
	scanf("%d",&B);
	
	printf("C sayisini giriniz: ");
	scanf("%d",&C);
	
	if(A>B && A>C){
		max=A;
	}
	else if(B>A && B>C){
		max=B;
	}
	else{
		max=C;
	}
	
	printf("En buyuk sayi: %d", max);
}
