#include <stdio.h>

main(){
	int n;
	int toplam = 0;

	printf("Toplanmasini istediginiz sayiyi giriniz(-1 cikis): ");
	scanf("%d", &n);

	while(n != -1){
	    toplam +=n;
	    printf("Yeni sayi giriniz: (-1 cikis): ");
	    scanf("%d", &n);
	}

	printf("Girilen tum sayilarin toplami %d", toplam);	
}

