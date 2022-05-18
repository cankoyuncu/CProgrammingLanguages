#include<stdio.h>
#include<stdlib.h>

struct node{
	int sayi; struct node *next;
};

typedef struct node Node;

void ListeYazdir(Node* head);

Node* BasaEkle(Node* head, int sayi);
Node* SonaEkle(Node* tail, int sayi);

int main(){
	int sayi;
	Node *head,*tail;

	head=(Node*)malloc(sizeof(Node));
	head->next=(Node*)malloc(sizeof(Node));

	printf("Cikmak icin -1'e basiniz!\n");
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);

	if(sayi!=-1){
		head->sayi=sayi;
		head->next=NULL;
		tail=head;
	}

	while(sayi!=-1){
		if(sayi%2==1 && sayi!=-1){
			tail=SonaEkle(tail,sayi);
		}
		else if(sayi%2==0 && sayi!=-1){
			head=BasaEkle(head,sayi);
		}
		
	printf("Bir sayi girniz: "); scanf("%d", &sayi);
	}

	ListeYazdir(head);

	return 0;
}

Node* BasaEkle(Node *head,int n){
	Node *New;
	New=(Node*)malloc(sizeof(Node));
	New->next=(Node*)malloc(sizeof(Node));
	New->sayi=n;
	New->next=head;

	return New;
}

Node* SonaEkle(Node *tail,int n){
	Node *New;
	New=(Node*)malloc(sizeof(Node));
	New->next=(Node*)malloc(sizeof(Node));

	tail->next=New;
	New->sayi=n;
	New->next=NULL;

	return New;
}

void ListeYazdir(Node *head){
	Node *c;
	c = head;
	while(c!=NULL){
		printf("%d \n",c->sayi);
		c=c->next;
	}
}
