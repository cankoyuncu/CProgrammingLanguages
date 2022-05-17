#include <stdio.h>

int main(void)
{
	int ogrenci_no;
	char isim[20];
	char bolum[20];
	
	FILE *mfPtr;
	if((mfPtr = fopen("ogrenci.dat","r")) == NULL)
		printf("Dosya acilamadi\n");
	else
	{
		printf("Secim yapiniz\n"
		"1-Ogrenci no - isim - bolum\n"
		"2-Bitirmek icin EOF yaziniz\n"
		"3-"
		
		)
	}
}
