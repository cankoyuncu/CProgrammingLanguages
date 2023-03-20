#include <stdio.h>
#define SIZE 5

main(){
	int i,j;
	double a[SIZE] = {0};
	double max = 0.0;
	
	for(i=0;i<SIZE;i++){
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%lf", &a[i]);
	}
	
	for(j=0;j<SIZE;j++)
		if(a[j]>max)
			max=a[j];
	printf("max=%.2lf\n", max);
	return 0;
}
