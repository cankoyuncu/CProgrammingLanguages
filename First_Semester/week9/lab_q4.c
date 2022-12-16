#include <stdio.h>

main(){
	int n;
	int ters;
	
	
	printf("N sayisini giriniz: ");
	scanf("%d", &n);
	
	while(n != 0)
	{
		ters = ters * 10;
		ters = ters + (n%10);
		n = n / 10;
	}
	
	printf("%d\n", ters);
	
	if(n==ters){
		printf("Palindrom sayidir.");
	}
	else {
		printf("Palindrom sayi degildir.");
	}
}
