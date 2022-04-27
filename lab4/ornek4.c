#include <stdio.h>

//write a program in C to calculate the length of the string using a pointer 

int main(){
	
	int i;
	char str[100];
	char *ptr;
	
	scanf("%s",&str);
	ptr=str;
	while(*(ptr+i)!='\0')
		i++;
		
	printf("%d",i);
	
}
