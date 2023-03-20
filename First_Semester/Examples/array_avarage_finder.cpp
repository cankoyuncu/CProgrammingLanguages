#include <stdio.h>
#include <math.h>
#define N 10

int main(){
	int i;
	float x[N], toplam = 0.0, ort, std_sap = 0.0;
	/* ortalama hesabi */
	for(i=0; i<N; i++){
		printf("%d. sayi : ",i+1); 
		scanf("%f",&x[i]);
		toplam += x[i];
	}
	ort = toplam/N;
	
	/* standart sapma hesabi */
	for(toplam = 0.0, i=0; i<N; i++)
		toplam += pow(x[i]-ort, 2.0);
		std_sap = sqrt( toplam/(N-1) );
		printf("Ortalama = %f\n",ort);
		printf("Standart sapma = %f\n",std_sap);
	return 0;
}

