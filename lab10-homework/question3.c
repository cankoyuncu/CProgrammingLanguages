#include<stdio.h>
#include<stdlib.h>

int counter=1;

struct node{
	int sayi; struct node *next;
};

typedef struct node Node;

Node* ListeOlustur();
Node* OrtadakiSil(Node* head);
void ListeYazdir(Node* head);


int main(){
	Node* head;

	head=ListeOlustur();
	ListeYazdir(head);
	printf("\n");
	head=OrtadakiSil(head);
	ListeYazdir(head);

	return 0;
}

Node* ListeOlustur(){

	int i,n;
	Node *head,*p;
	p=head;

	printf("Listedeki sayi adetini giriniz: "); scanf("%d",&n);

	for(i=0; i<n; i++){
		if(i==0){
			head= (Node*)malloc(sizeof(Node));
			p=head;
		}
		else{
			p->next= (Node*)malloc(sizeof(Node));
			p=p->next;
		}
		printf("Bir sayi giriniz: "); scanf("%d", &p->sayi);
	}
	p->next= NULL;

	return head;
}


void ListeYazdir(Node* head){

	Node *p;
	p=head;

	while(p!=NULL){
		printf("%d\n",p->sayi);
		p=p->next;
		counter++;
	}
}

Node* OrtadakiSil(Node* head){

	int del=0;
	Node *p,*q;
	p= head;

	while(p != NULL){
		del++;
		if(del == counter/2) break;
		else{
			q= p;
			p= p->next;
		}
	}
	if(del==counter/2){
		q->next= p->next;
		free(p);
	}
	return head;
}
