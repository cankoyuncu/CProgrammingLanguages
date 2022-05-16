#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Ogrenci numaranizdaki tek sayilari bir int dinamik diziye, cift sayilari ise bir char dinamik diziye ekleyen fonksiyon yaziniz. 
Fonksiyon ogrenci numaranizi ve int ile char pointer baslangic adreslerini parametre olarak alacaktir.*/

void even_odd_func(int *even, char *odd, int n){
	int a,temp,temp2;
	int i=0;
	int j=0;
	
	while(n!=0){
		
		a=n%10;
		n=n/10;
		
		if(a%2==0){
			even=(int*)realloc(even,(i+1)*sizeof(int));
			*(even+i)=a;
			i++;
		}
		else{
			odd=(char*)realloc(odd,(j+1)*sizeof(char));
			*(odd+j)=a;
			j++;
		}
		
	}
	temp=i;
	temp2=j;
	i=0;
	j=0;
	
	printf("Cift sayilar: \n");
	while(i<temp){
		printf("%d ", *(even+i));
		i++;
	}
	printf("\n");
	printf("Tek Sayilar: \n");
	while(j<temp2){
		printf("%d ", *(odd+j));
		j++;
	}


}

int main(){
	
	int n;
	int *even=(int*)malloc(1*sizeof(int));
	char *odd=(char*)malloc(1*sizeof(char));
		
	printf("Ogrenci no giriniz: \n");
	scanf("%d", &n);
	
	even_odd_func(even,odd,n);
	
	return 0;
}
