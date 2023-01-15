#include <stdio.h>

//int maximum(int x, int y, int z);

int maximum(int x, int y, int z){
	int max;
	if(x>y)
		if(x>z)
			max=x;
		else
			max=z;
	else if(z>y)
		max=z;
	else 
		max=y;
	
	return max;
}

main(){
	
	int x, y, z;
	printf("pls enter the 3 numbers: ");
	scanf("%d%d%d", &x,&y,&z);
	printf("the max number is: %d", maximum(x,y,z));
	
	return 0;
}
