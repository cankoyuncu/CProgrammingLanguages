#include <stdio.h>
#include <stdlib.h>

//klavyeden 0 giriline kadar deger alan, o deger kadar hafizada yer kaplayan program 

int main(){
	
	int *ptr;
	int i=0, j=0, n;
	
	ptr = (int*)malloc(sizeof(int));
	
	while(1){
		scanf("%d", &n);
		if(n==0){
			break;
		}
		else{
			*(ptr+i) = n;
			i++;
			realloc(ptr, sizeof(int)+i);
		}
	}
	
	for(j=0; j<i; j++)
	printf("%d", *(ptr + j));
	
	return 0;
}
