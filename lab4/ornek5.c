#include <stdio.h>

//Write a program in C to compute the sum of all elements in an array using pointers.

int main(){
	
	int dizi[100];
	int *ptr;
	int n, i, toplam=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d", &dizi[i]);
	}
	
	ptr=dizi;
	for(i=0;i<n;i++){
		toplam+=*(ptr+i);
	}
	
	printf("%d", toplam);
}
