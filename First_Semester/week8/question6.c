#include <stdio.h>

int main(){
	int feet;
	int cm = 0;
	
	printf("Cm'ye cevrilmesini istediginiz feet degerini giriniz:");
	scanf("%d", &feet);
	
	cm = feet * 30.48;
	
	printf("Cm cinsinden deger : %d", cm);
}
