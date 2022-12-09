//write a program using a dynamic memory allocation that prints out words of a sentence in reverse order.

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char A[100];
	int n=0,i;
	
	printf("Write something: \n");
	gets(A);
	
	while(A[n]!='\0'){
		n++;
	}
	
	char *ptr=(int*)malloc(n*sizeof(char));
	ptr=A;
	
	printf("Reversed version is ");
	for(i=n; i!=0; i--){
		printf("%c", *(ptr+i-1));
	}
	
	return 0;
}
