#include <stdio.h>
#include <stdlib.h>

struct musteri{
	int hesapNo;
	char soyad[40];
	char isim[40];
	double bakiye;
};

int secimGir(void);
void textDosya(FILE *);
void kayitGuncelle(FILE *);
void yeniKayit(FILE *);
void kayitSil(FILE *);
void listele(FILE *);

int main(void)
{
	FILE *myPtr;
	int secim;
	if((myPtr = fopen("musteri.dat","r+"))==NULL)
		printf("Dosya acilamadi!\n");
	
	else
	{
		while((secim = secimGir()) != 6)
		{
			switch(secim)
			{
				case 1: textDosya(myPtr); break;
				case 2: kayitGuncelle(myPtr); break;
				case 3: yeniKayit(myPtr); break;
				case 4: kayitSil(myPtr); break;
				case 5: listele(myPtr); break;
			}
		}
		fclose(myPtr);
	}
}

int secimGir()
{
	int menuSecim;
	printf("\n Seciminizi yapiniz\n"
		"1-musteri.dat dosyasinin icerigini\n"
		" formatli olarak \"hesaplar.dat\" dosyasina yaz\n"
		"2-hesap guncelle\n"
		"3-yeni hesap ekle\n"
		"4-hesap sil\n"
		"5-musteri.dat dosyasinin icerigini listele\n"
		"6-cikis\n?");
		
	scanf("%d", &menuSecim);
	return menuSecim;
}

void textDosya(FILE *okuPtr)
{
	FILE *yazPtr;
	struct musteri hesapBilgi = {0,"","",0.0};
	if((yazPtr = fopen ("hesaplar.dat", "w"))==NULL)
		printf("Dosya acilmadi\n");
	else 
	{
		rewind(okuPtr);
		fprintf(yazPtr, "%-10s%-16s%-11s%10s\n", "HesapNo", "Soyad", "Isim", "Bakiye");
		while(!feof(okuPtr))
		{
			fread(&hesapBilgi,sizeof(struct musteri),1,okuPtr);
			if(hesapBilgi.hesapNo!=0)
			fprintf(yazPtr,"%-10d%-16s%-11s%10.2f\n", hesapBilgi.hesapNo,
				hesapBilgi.soyad,hesapBilgi.isim,hesapBilgi.bakiye);
		}
		fclose(yazPtr);
	}
}

void kayitGuncelle(FILE *fPtr)
{
	int hesapID;
	double islemMiktari;
	struct musteri hesapBilgi = {0,"","",0.0};
	printf("Guncellenecek hesap no gir[1-100]:");
	scanf("%d", &hesapID);
	fseek(fPtr,(hesapID-1)*sizeof(struct musteri),SEEK_SET);
	fread(&hesapBilgi, sizeof(struct musteri),1,fPtr);
	if(hesapBilgi.hesapNo==0)
		printf("%d nolu hesap icin bilgi girilmemistir\n",hesapID);
	else 
	{
		printf("%-10d%-16s%-11s%10.2f\n\n", hesapBilgi.hesapNo,
				hesapBilgi.soyad,hesapBilgi.isim,hesapBilgi.bakiye);
		printf("Hesaba yatacak (+) veya hesaptan cekilecek (-) tutari gir:");
		scanf("%lf", &islemMiktari);
		hesapBilgi.bakiye += islemMiktari;
		printf("%-10d%-16s%-11s%10.2f\n", hesapBilgi.hesapNo,
				hesapBilgi.soyad,hesapBilgi.isim,hesapBilgi.bakiye);
		fseek(fPtr,(hesapID-1)*sizeof(struct musteri),SEEK_SET);
		fwrite(&hesapBilgi,sizeof(struct musteri),1,fPtr);
	}
}

void kayitSil(FILE *fPtr)
{
	struct musteri hesapBilgi, bosHesap = {0,"","",0.0};
	int hesapID;
	printf("Silinecek hesap no gir[1-100]:");
	scanf("%d",&hesapID);
	fseek(fPtr,(hesapID-1)*sizeof(struct musteri),SEEK_SET);
	fread(&hesapBilgi,sizeof(struct musteri),1,fPtr);
	if(hesapBilgi.hesapNo==0)
		printf("Silinecek %d nolu hesap yok", hesapID);
	else
	{
		fseek(fPtr,(hesapID-1)*sizeof(struct musteri),SEEK_SET);
		fwrite(&bosHesap,sizeof(struct musteri),1,fPtr);
	}
}

void yeniKayit(FILE *fPtr)
{
	int hesapID;
	struct musteri hesapBilgi = {0,"","",0.0};
	printf("Yeni hesap no gir[1-100]:");
	scanf("%d",&hesapID);
	fseek(fPtr,(hesapID-1)*sizeof(struct musteri),SEEK_SET);
	fread(&hesapBilgi, sizeof(struct musteri),1,fPtr);
	if(hesapBilgi.hesapNo!=0)
		printf("%d nolu hesap zaten mevcut\n", hesapID);
	else
	{
		printf("Soyad, isim ve bakiye gir:");
		scanf("%s%s%lf",hesapBilgi.soyad,hesapBilgi.isim,hesapBilgi.bakiye,
			hesapBilgi.hesapNo = hesapID);
		fseek(fPtr,(hesapID-1)*sizeof(struct musteri),SEEK_SET);
		fwrite(&hesapBilgi,sizeof(struct musteri),1,fPtr);
	}
}

void listele(FILE *fPtr)
{
	struct musteri hesapBilgi = {0,"","",0.0};

	printf("%-10s%-16s%-11s%10s\n","HesapNo","Soyad","Ýsim","Bakiye");
	while(!feof(fPtr))
	{
		fread(&hesapBilgi,sizeof(struct musteri),1,fPtr);
		if(hesapBilgi.hesapNo!=0)
		printf("%-10d%-16s%-11s%10.2f\n", hesapBilgi.hesapNo,
			hesapBilgi.soyad,hesapBilgi.isim,hesapBilgi.bakiye);
	}
	fclose(fPtr);
	getchar();
}
