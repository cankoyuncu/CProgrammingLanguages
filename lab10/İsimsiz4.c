#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node {
	int num;
	Node* next;
};

typedef struct Node Node;

void main() {
	Node* head = NULL;
	Node* last = NULL;

	int inputNum = 0;

	printf("Enter The Number Or -1 For Exit:");
	cin >> inputNum;

	while (inputNum != -1) {

		Node* tempNode = (Node*)malloc(sizeof(Node));
		tempNode->num = inputNum;
		tempNode->next = NULL;

		if (inputNum % 2 == 0) {
			if (head == NULL) {
				head = tempNode;
				last = head;
			}
			else {
				last->next = tempNode;
				last = tempNode;	
			}
		}
		else {
			if (head == NULL) {
				head = tempNode;
				last = head;
			}
			else {
				tempNode->next = head;
				head = tempNode;
			}
		}

		printf("Enter The Number Or -1 For Exit:");
		cin >> inputNum;
	}

	while (head != NULL)
	{
		cout << head->num << endl;
		head = head->next;
	}
}
