#include <stdio.h>
#include <stdlib.h>

struct student{
	int number;
	char name[50];
	int midterm, final;
	struct student *after;
};
typedef struct student node;
node *head, *newNode, *beforeNode, *mostSuccess, *new;

void studentListCreate(){
	int n,k;
	printf("How many elements will the list have?");
	scanf("%d", &n);
	for(k=0; k<n; k++)
	{
		if(k==0)
		{
			newNode = (node *)malloc(sizeof(node));
			head = newNode;
		}
		else 
		{
			newNode->after = (node *) malloc(sizeof(node));
			newNode = newNode->after;
		}
		printf("Student Number:");
		scanf("%d",&newNode->number);
		printf("Student Name:");
		scanf("%s",&newNode->name);
		printf("Student Midterm:");
		scanf("%d", &newNode->midterm);
		printf("Student Final:");
		scanf("%d", &newNode->final);
	}
	newNode->after = NULL;
}

void studentList()
{
	double termNote = 0;
	node *p;
	p = head;
	while(p!=NULL)
	{
		printf("\n ********************** \n");
		printf("Student Number: %d\t", p->number);
		printf("Student Name: %s\t", p->name);
		printf("Student Midterm: %d\t", p->midterm);
		printf("Student Final: %d\t", p->final);
		termNote = p->midterm*0.4 + p->midterm*0.6;
		printf("\n ********************** \n");
		p = p->after;
	}
}
void studentAdd()
{
	int registerNumber;
	node *p, *q;
	newNode = (node *) malloc(sizeof(node));
	printf("Student Number:");
	scanf("%d",&newNode->number);
	printf("Student Name:");
	scanf("%s",&newNode->name);
	printf("Student Midterm:");
	scanf("%d", &newNode->midterm);
	printf("Student Final:");
	scanf("%d", &newNode->final);
	
	printf("Before which recording do you want to add?");
	printf("\nIf you want add to after list press '0'");
	scanf("%d", &registerNumber);
	
	p = head;
	if(p->number == registerNumber)
	{
		newNode->after = p;
		head = newNode;
	}
	else
	{
		while(p->after !=NULL)
		{
			q=p;
			p=p->after;
			if(p->number == registerNumber) break;
		}
		if(p->number == registerNumber)
		{
			q->after = new;
			new->after = p;
		}
		else if(p->after == NULL)
		{
			p->after = new;
			new->after = NULL;
		}
	}
}

void studentDelete()
{
	int registerNumber;
	node *p, *q;
	
	printf("Please enter the delete number");
	scanf("%d", &registerNumber);
	
	p = head;
	if(p->number == registerNumber)
	{
		head = p->after;
		free(p);
	}
	else 
	{
		while(p->after !=NULL)
		{
			if(p->number == registerNumber) break;
			else {
				q=p;
				p=p->after;
			}
		}
		if(p->number == registerNumber)
		{
			q->after = p->after;
			free(p);
		}
		else if(p->after == NULL)
		{
			printf("Not found for delete student number\n");
		}
	}
}
double calSuccess(int midterm, int final)
{
	return (0.4*midterm)+(0.6*final);
}

void mostSuccessfully()
{
	double successNote = 0;
	node *p;
	p = head;
	mostSuccess = head;
	
	while(p->after!=NULL)
	{
		p=p->after;
		if(callSuccess(p->midterm, p->final)>callSuccess(mostSuccess->midterm, mostSuccess->final))
			mostSuccess = p;
	}
	printf("Most Successfull Student:\n");
	printf("Number:%d - Name: %s Success Note:%.2f\n", mostSuccess->number);
}

void classSuccessAverage()
{
	double successNoteAvarage = 0;
	double total = 0;
	int counter = 0;
	node *p;
	p = head;
	if(p==NULL)
	{
		printf("Not found in the list");
	}
	else
	{
		do
		{
			total += successNoteCal(p->midterm,p->final);
			p=p->after;
			counter++;
		}
		while(p!=NULL);
		
		successNoteAvarage = total/counter;
		printf("Success Note Avarage: %.2f \n", successNoteAvarage);
	}
}

int main(void)
{
	int select=0;
	printf("1-Create List \n2-Add New Record \n3-Delete Record \n4-Most Success Note\n");
	while(1)
	{
		printf("Select[1-5]?");
		scanf("%d", &select);
		switch(select)
		{
			case 1: studentListCreate(); listStudent(); break;
			case 2: studentAdd(); listStudent(); break;
			case 3: dellStudent(); listStudent(); break;
			case 4: mostSuccessStudent(); break;
			case 5: classSuccessAvarage(); break;
		}
	}
}
