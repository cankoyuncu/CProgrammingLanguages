#include <stdio.h>

main(){
	int i;
	int *iptr;
	i = 5; 
	iptr = &i;
	
	printf("I adress: %p\n", &i);
	printf("Iptr value: %p\n", iptr);
	
	printf("I value: %d\n", i);
	printf("*iptr value: %d\n", *iptr);
	
	getchar();
	
	return 0;
}
