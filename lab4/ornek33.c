#include <stdio.h>

int main(){
	
	int i,n;
	int dizi[100];
	int *p=dizi;
	
	printf("Dizi kaca kadar gitsin?\n");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		printf("%d. deger ", i+1);
		scanf("%d", p+i);
	}
	
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("%d ", *(p+i));
	}
	
}
