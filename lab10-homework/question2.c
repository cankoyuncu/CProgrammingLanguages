#include<stdio.h>
#include<stdlib.h>

struct node{
	int sayi; struct node *next;
};
typedef struct node Node;

Node* ListeDuzenle(Node* head);
Node* ListeOlustur();
void ListeYazdir(Node* head);


int main(){
	Node *head;

	head= ListeOlustur();
	ListeYazdir(head);
	printf("\n");
	head= ListeDuzenle(head);
	ListeYazdir(head);

	return 0;
}

Node* ListeOlustur(){
	int i,n;
	Node *head,*p;

	printf("Listedeki sayi adetini giriniz: \n"); scanf("%d",&n);

	for(i=0;i<n;i++){
		if(i==0){
			head=(Node*)malloc(sizeof(Node));
			p=head;
		}
		else{
			p->next=(Node*)malloc(sizeof(Node));
			p=p->next;
		}
		printf("Bir sayi giriniz: "); scanf("%d", &p->sayi);
	}
	p->next=NULL;

	return head;
}

Node* ListeDuzenle(Node* head){

	Node *q,*p;
	p=head;

	while(p!=NULL){

		if(p==head && head->next==NULL)
			break;

		else if(p->next==NULL)
		{
			q->next=NULL;
			p->next=head;
			break;

		}
		q=p;
		p=p->next;
	}
	return p;
}

void ListeYazdir(Node* head){
	Node *p;
	p=head;

	while(p!=NULL){
		printf("%d\n", p->sayi);
		p=p->next;
	}
}
