#include <stdio.h>

double usAl(double,double);

int main(){
	double a,b;
	printf("Taban ve us degerini gir: ");
	scanf("%lf %lf", &a, &b);
	printf("%.2f",usAl(a,b));
}

double usAl(double x, double y){
	int sayac;
	double sonuc = 1.0;
	for(sayac=0;sayac<y;sayac++){
		sonuc *= x;
	}
	return sonuc;
}
