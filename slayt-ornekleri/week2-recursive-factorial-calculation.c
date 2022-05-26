#include <stdio.h>

long factorial(long n){
	
	if(n<=1)
		return 1;
	else
		return (n*factorial(n-1));
}


main(){
	
	int i;
	for(i=0; i<10; i++){
		printf("%d = %d\n", i, factorial(i));
	}
	
	return 0;
}
