#include <stdio.h>

int main(){
	
	int i;
	int dizi[5];
	int *p=dizi;
	
	for(i=0;i<5;i++){
		scanf("%d", p+i);
	}
	
	printf("\n");
	
	for(i=0;i<5;i++){
		printf("%d ", *(p+i));
	}
	
	
}
