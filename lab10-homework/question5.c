<<<<<<< HEAD
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

    head=ListeOlustur();
    ListeYazdir(head);
    printf("\n");
    head=ListeDuzenle(head);
    ListeYazdir(head);

    return 0;
}

Node* ListeOlustur(){
    int n,i;
    Node *head,*p;

    printf("Listedeki sayi adetini giriniz: "); scanf("%d", &n);

    for(i=0; i<n; i++){
        if(i==0){
            head=(Node*)malloc(sizeof(Node));
            p=head;
        }
        else{
            p->next=(Node*)malloc(sizeof(Node));
            p=p->next;
        }
        printf("Bir sayi girniz: "); scanf("%d", &p->sayi);
    }
    p->next=NULL;

    return head;
}

void ListeYazdir(Node *head){
    Node *p;
    p=head;

    while(p!=NULL){
        printf("%d\n", p->sayi);
        p=p->next;
    }
}

Node* ListeDuzenle(Node* head){
    Node *p,*q;
    p=head;
    q=head->next;

    while(p!=NULL){
        if(p->next==NULL){
            p->next=head;
            p=p->next;
            p->next=NULL;
            break;
        }
        p=p->next;
    }
    head=q;
    return head;
}
=======
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

    head=ListeOlustur();
    ListeYazdir(head);
    printf("\n");
    head=ListeDuzenle(head);
    ListeYazdir(head);

    return 0;
}

Node* ListeOlustur(){
    int n,i;
    Node *head,*p;

    printf("Listedeki sayi adetini giriniz: "); scanf("%d", &n);

    for(i=0; i<n; i++){
        if(i==0){
            head=(Node*)malloc(sizeof(Node));
            p=head;
        }
        else{
            p->next=(Node*)malloc(sizeof(Node));
            p=p->next;
        }
        printf("Bir sayi girniz: "); scanf("%d", &p->sayi);
    }
    p->next=NULL;

    return head;
}

void ListeYazdir(Node *head){
    Node *p;
    p=head;

    while(p!=NULL){
        printf("%d\n", p->sayi);
        p=p->next;
    }
}

Node* ListeDuzenle(Node* head){
    Node *p,*q;
    p=head;
    q=head->next;

    while(p!=NULL){
        if(p->next==NULL){
            p->next=head;
            p=p->next;
            p->next=NULL;
            break;
        }
        p=p->next;
    }
    head=q;
    return head;
}
>>>>>>> d964f13bb86ca109507fc35b199d6d1fdd53d0f2
