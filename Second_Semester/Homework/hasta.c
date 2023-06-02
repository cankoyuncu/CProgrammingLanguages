#include <stdio.h>
#include <string.h>

struct Hasta {
    char tcKimlikNo[12];
    char ad[50];
    int yas;
    char hastalik[100];
};

// Hasta bilgilerini dosyaya yazma
void hastaKaydiEkle(const struct Hasta* hasta) {
    FILE* dosya = fopen("hasta_kayitlari.txt", "ab");
    fwrite(hasta, sizeof(struct Hasta), 1, dosya);
    fclose(dosya);
}

// Hasta bilgilerini dosyadan okuma
void hastaKaydiOku(const char* tcKimlikNo) {
    FILE* dosya = fopen("hasta_kayitlari.txt", "rb");
    struct Hasta hasta;
    while (fread(&hasta, sizeof(struct Hasta), 1, dosya) == 1) {
        if (strcmp(hasta.tcKimlikNo, tcKimlikNo) == 0) {
            printf("Hasta Bilgileri:\n");
            printf("TC Kimlik No: %s\n", hasta.tcKimlikNo);
            printf("Ad: %s\n", hasta.ad);
            printf("Yaş: %d\n", hasta.yas);
            printf("Hastalık: %s\n", hasta.hastalik);
            fclose(dosya);
            return;
        }
    }
    printf("Hasta bulunamadi.\n");
    fclose(dosya);
}

// Hasta bilgisini dosyadan silme
void hastaKaydiSil(const char* tcKimlikNo) {
    FILE* dosya = fopen("hasta_kayitlari.txt", "r+b");
    struct Hasta hasta;
    while (fread(&hasta, sizeof(struct Hasta), 1, dosya) == 1) {
        if (strcmp(hasta.tcKimlikNo, tcKimlikNo) == 0) {
            fseek(dosya, -sizeof(struct Hasta), SEEK_CUR);
            memset(&hasta, 0, sizeof(struct Hasta));
            fwrite(&hasta, sizeof(struct Hasta), 1, dosya);
            fclose(dosya);
            return;
        }
    }
    printf("Hasta bulunamadi.\n");
    fclose(dosya);
}

// Hasta bilgisini dosyada güncelleme
void hastaKaydiDuzenle(const char* tcKimlikNo, const struct Hasta* yeniHasta) {
    FILE* dosya = fopen("hasta_kayitlari.txt", "r+b");
    struct Hasta hasta;
    while (fread(&hasta, sizeof(struct Hasta), 1, dosya) == 1) {
        if (strcmp(hasta.tcKimlikNo, tcKimlikNo) == 0) {
            fseek(dosya, -sizeof(struct Hasta), SEEK_CUR);
            fwrite(yeniHasta, sizeof(struct Hasta), 1, dosya);
            fclose(dosya);
            return;
        }
    }
    printf("Hasta bulunamadi.\n");
    fclose(dosya);
}

// Tüm hasta kayıtlarını dosyadan listeleme
void hastaKayitlariniListele() {
FILE* dosya = fopen("hasta_kayitlari.txt", "rb");
struct Hasta hasta;
while (fread(&hasta, sizeof(struct Hasta), 1, dosya) == 1) {
printf("TC Kimlik No: %s\n", hasta.tcKimlikNo);
printf("Ad: %s\n", hasta.ad);
printf("Yaş: %d\n", hasta.yas);
printf("Hastalık: %s\n", hasta.hastalik);
printf("------------------------\n");
}
fclose(dosya);
}

int main() {

    struct Hasta yeniHasta;

    strcpy(yeniHasta.tcKimlikNo, "12345678901");
    strcpy(yeniHasta.ad, "Ali");
    yeniHasta.yas = 30;
    strcpy(yeniHasta.hastalik, "Alerji");

    hastaKaydiEkle(&yeniHasta);
    strcpy(yeniHasta.tcKimlikNo, "98765432109");
    strcpy(yeniHasta.ad, "Ayşe");
    yeniHasta.yas = 25;
    strcpy(yeniHasta.hastalik, "Grip");

    hastaKaydiEkle(&yeniHasta);

    hastaKaydiOku("12345678901");

    hastaKaydiSil("98765432109");

    strcpy(yeniHasta.tcKimlikNo, "12345678901");
    strcpy(yeniHasta.ad, "Ali Can");
    
    yeniHasta.yas = 32;
    strcpy(yeniHasta.hastalik, "Alerji");
    hastaKaydiDuzenle("12345678901", &yeniHasta);

    hastaKayitlariniListele();

return 0;

}