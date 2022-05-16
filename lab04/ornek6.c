#include <stdio.h>

//Write a program in C to print a string in reserve using a pointer

int main(){
	
	int a[5];
	int *ptr;
	int sum=0;
	int i;
	
	ptr=a;
	
	printf("Sayi giriniz\n");
	for(i=0; i<5; i++){
		scanf("%d", &*(ptr+i));
	}
	
	ptr=a;
	
	for(i=0; i<5; i++){
		
		sum=sum+*(ptr+i);
		
	}
	
	printf("Toplam=%d", sum);
	
	getchar();
	return 0;
}
