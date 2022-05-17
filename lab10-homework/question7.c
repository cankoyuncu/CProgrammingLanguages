<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>

struct node{
	int yas; struct node *next;
};

typedef struct node Node;

Node* ListeOlustur();
Node* DugumSil(Node*, int);
void ListeYazdir(Node* head);


int main(){
	Node *head;
	int yas;

	head=ListeOlustur();
	ListeYazdir(head);
	printf("------------\n");

	printf("Silmek istediginiz yasi giriniz: ");
	scanf("%d",&yas);

	head=DugumSil(head,yas);
	ListeYazdir(head);

	return 0;
}

Node* ListeOlustur(){
	Node *head,*p;
	int n,i;

	printf("Listedeki sayi adetini giriniz: "); scanf("%d",&n);

	for(i=0;i<n;i++){
		if(i==0){
			head=(Node*)malloc(sizeof(Node));
			p=head;
		}
		else{
			p->next=(Node*)malloc(sizeof(Node));
			p=p->next;
		}
		printf("Yas giriniz:");
		scanf("%d", &p->yas);
	}
	p->next=NULL;
	return head;
}
void ListeYazdir(Node *head){
	Node *p;
	p=head;

	while(p!=NULL){
		printf("Yas: %d\n", p->yas);
		p=p->next;
	}
}

Node* DugumSil(Node* head, int yas){
	Node *p,*q;
	p=head;

	while(p!=NULL){
		if(p->yas==yas){
			head=p->next;
			free(p);
			break;
		}
		else{
			while(p->next!=NULL && p->yas!=yas){
				q=p;
				p=p->next;
			}
			if(p->yas==yas){
				q->next=p->next;
				free(p);
				break;
			}
			else if(p->next==NULL)
				printf("Silinecek Dugum Bulunamadi!\n");
				break;
		}
	}
	return head;
}
=======
#include<stdio.h>
#include<stdlib.h>

struct node{
	int yas; struct node *next;
};

typedef struct node Node;

Node* ListeOlustur();
Node* DugumSil(Node*, int);
void ListeYazdir(Node* head);


int main(){
	Node *head;
	int yas;

	head=ListeOlustur();
	ListeYazdir(head);
	printf("------------\n");

	printf("Silmek istediginiz yasi giriniz: ");
	scanf("%d",&yas);

	head=DugumSil(head,yas);
	ListeYazdir(head);

	return 0;
}

Node* ListeOlustur(){
	Node *head,*p;
	int n,i;

	printf("Listedeki sayi adetini giriniz: "); scanf("%d",&n);

	for(i=0;i<n;i++){
		if(i==0){
			head=(Node*)malloc(sizeof(Node));
			p=head;
		}
		else{
			p->next=(Node*)malloc(sizeof(Node));
			p=p->next;
		}
		printf("Yas giriniz:");
		scanf("%d", &p->yas);
	}
	p->next=NULL;
	return head;
}
void ListeYazdir(Node *head){
	Node *p;
	p=head;

	while(p!=NULL){
		printf("Yas: %d\n", p->yas);
		p=p->next;
	}
}

Node* DugumSil(Node* head, int yas){
	Node *p,*q;
	p=head;

	while(p!=NULL){
		if(p->yas==yas){
			head=p->next;
			free(p);
			break;
		}
		else{
			while(p->next!=NULL && p->yas!=yas){
				q=p;
				p=p->next;
			}
			if(p->yas==yas){
				q->next=p->next;
				free(p);
				break;
			}
			else if(p->next==NULL)
				printf("Silinecek Dugum Bulunamadi!\n");
				break;
		}
	}
	return head;
}
>>>>>>> d964f13bb86ca109507fc35b199d6d1fdd53d0f2
