#include <stdio.h>
#include <stdlib.h>

struct student{
	int no;
	char name[40];
	int vize;
	int final;
	struct student *next;	
};
typedef struct student node;
node *head, *newNode, *beforeNode, *enBasarili;

node* createList(){
	int n,k;
	node *head, *p;
	printf("How many students in the list = ");
	scanf("%d", &n);
	for(k=0; k<n; k++){
		if(k==0){
			head = (node *)malloc(sizeof(node));
			p = head; 
		}
		else{
			p->next = (node *) malloc(sizeof(node));
			p = p->next;
		}
		printf("Enter %d Student number: ", k+1); scanf("%d", &p->no);
		printf("Enter %d Student name: ", k+1); scanf("%s", p->name);
		printf("Enter %d Vize: ", k+1); scanf("%d", &p->vize);
		printf("Enter %d Final: ", k+1); scanf("%d", &p->final);
	}
	p->next = NULL;
	return head;
}

	void traverseList (node* head){
		int counter =1;
		node *p;
		p = head;
		while(p !=NULL){
			printf("%d\n", p->no);
			printf("%s\n", p->name);
			printf("%d\n", p->vize);
			printf("%d\n", p->final);
			p = p->next;
		}		
	}

int main(){
	head = (node *) malloc(sizeof(node));
	
	head = createList(); 
	traverseList(head);
	
	return 0;
}
