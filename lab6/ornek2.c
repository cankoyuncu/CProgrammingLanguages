#include <stdio.h>
#include <stdlib.h>

/*Klavyeden alinan iki tane karakter dizisini(string) birlestirip ekrana yazdiran programi
pointer kullanarak yazdir*/

int main(){
	
	char *ptr1, *ptr2;
	int i=0, j=0;
	char n;
		
	ptr1 = (char*)malloc(sizeof(char));
	
	while((n = getchar()) != '\n'){
		*(ptr1 + i) = n;
		i++;
		realloc(ptr1, sizeof(char) * (i+i));
	}
	
	*(ptr1 + i) = '\0';
	
	ptr2 = (char*)malloc (sizeof(char));
	
	while((n = getchar()) != '\n'){
		*(ptr2 + j) = n;
		j++;
		realloc(ptr2, sizeof(char) * (j+1));
	}
	
	*(ptr2 + j) = '\0';
	
	printf("%s %s", ptr1, ptr2);
	
return 0;
}
