#include <stdio.h>
#include <stdlib.h>

struct node {
	int sayi;
	struct node * next;
};
typedef struct node nd;


int main(){
	int sayi;
	int counter = 1;
	nd *head, *p, *q;

	while(sayi != -1){
		if(counter == 1){
			head = (nd*)malloc(sizeof(nd));
			p = head;
			q = head;	
		}
		if(sayi%2 == 1){
			p->next = head;
			head = p;
		}
		else{
			q->next = (nd*)malloc(sizeof(nd));
			q = q->next;
		}
		printf("sayi giriniz: ");
		scanf("%d", &sayi);	
	}
	
	p = head;
	
	while(p != NULL){
		printf("%d", p->sayi);
		p = p->next;
	}
	
	return 0;
}
