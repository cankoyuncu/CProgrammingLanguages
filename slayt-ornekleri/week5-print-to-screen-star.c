#include <stdio.h>
#include <conio.h>

int main(){
	char enter[50];
	char *p;
	int i=0,k;
	p=enter;
	while(1){
		*(p+i)=getch();
		if(*(p+i)==13)
			break;
		putchar('*');
		printf("Adress[%d]: %d\n",i,p+i);
		i++;
	}
	printf("\n");
	for(k=0;k<i;k++){
		printf("Adress [%d]: %d\n",k, p+k);
		putchar(*(p+k));
	}
	getchar;
	return 0;
}
