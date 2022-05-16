//pointer kullanarak en buyuk sayiyi bulmak

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n,m,i;
	
	printf("Dizinin boyutunu giriniz: \n");
	scanf("%d", &n);
	
	int *ptr=(int*)malloc(n*sizeof(int));
	
	printf("Dizinin elemanlarini giriniz:\n");
	for(i=0; i<n; i++){
		scanf("%d", ptr+i);
	}
		
	printf("Diziye yeni eleman girini:\n");
	for(i=n; i<n+m; i++){
		scanf("%d", ptr+i);
	}
	
	for(i=0; i<n+m; i++){
		printf("%d\n", *(ptr+i));
	}
	
	return 0;
}
