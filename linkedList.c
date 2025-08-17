#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* head = NULL;

struct Node* createNode(int value){
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = value;
	newnode->next = NULL;
	return newnode;
}

void insertEnd(int value){
	struct Node* newNode = createNode(value);
	if (head == NULL){
		head = newNode;
		return;
	}
	struct Node* temp = head;
	while (temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}

void insertStart(int value){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->next = head;
	head = newNode;
}

void displayList(){
	struct Node* temp = head->next;
	while (temp != NULL){
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}
void deleteNode(int value){
	
	struct Node* temp = head;
	struct Node* prev = NULL;
	
	while (head != NULL && temp->data == value){
		head = temp->next;
		free(temp);
		return;
	}

	while (temp->data != value && temp != NULL){
		prev = temp;
		temp = temp->next;
	}
	prev->next = temp->next;
	temp->next = NULL;

}
int main(){
	insertEnd(20);
	insertEnd(10);
	insertEnd(90);
	insertEnd(100);
	displayList();
	deleteNode(90);
	displayList();

}
