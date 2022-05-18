#include<stdio.h>
#include<stdlib.h>

struct node{
    int sayi; struct node* next;
};
typedef struct node Node;

Node* ListeOlustur();
void ListeYazdir(Node* head);
Node* ListeDuzenle(Node *head);


int main(){
	int sayi;
	Node *head;

	head= ListeOlustur();
	ListeYazdir(head);
	printf("\n");
	head=ListeDuzenle(head);
	ListeYazdir(head);

	return 0;
}


Node* ListeOlustur(){
	int i, n;
	Node *head,*p;

	printf("Listedeki sayi adetini giriniz:\n"); scanf("%d",&n);

	for(i=0; i<n; i++){
        if(i==0){
			head= (Node*)calloc(sizeof(Node));
			p= head;
		}
		else{
			p->next =(Node*)calloc(sizeof(Node));
			p= p->next;
		}
		printf("Bir sayi giriniz:"); scanf("%d", &p->sayi);
	}
	p->next= NULL;
	return head;
}


Node* ListeDuzenle(Node *head){
	Node *p,*q;
	p=head;

	while(p!=NULL){
		if(p == head && p->next == NULL)
            break;
		else if(head->next == p && p->next == NULL){
			p->next= head;
			head->next= NULL;
			break;
		}
		else if(p->next == NULL){
			p->next= head->next;
			q->next= head;

			head->next= NULL;
			break;
		}
		q= p;
		p= p->next;
	}

	return p;
}


void ListeYazdir(Node* head){
	Node *p;
	p=head;

	while(p!=NULL){
		printf("%d\n",p->sayi);
		p=p->next;
	}
}
