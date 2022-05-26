#include <stdio.h>
#include <stdlib.h>

main(){
	int n, i, *ptr, sum=0;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	ptr= (int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Not enough memory!");
	}
	printf("Enter array elements: \n");
	for(i=0; i<n; i++)
	{
		scanf("%d", ptr+i);
		sum += *(ptr+i);
	}
	printf("Sum = %d", sum);
	
	getchar();
}
