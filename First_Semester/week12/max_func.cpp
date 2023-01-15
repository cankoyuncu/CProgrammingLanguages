#include <stdio.h>

int max(int a, int b, int c);

main(){
	int a,b,c;
	printf("MAX finder need 3 three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("The max number is: %d", max(a,b,c));
	return 0;
}

int max(int a, int b, int c){
	int maximum;
	if(a>b){
		if(a>c)
			maximum = a;
		else
			maximum = c;
	}
	else if (b>c)
		maximum = b;
	else 
		maximum = c;
	return maximum;
}
