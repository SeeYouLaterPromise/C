#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
	int value;
	struct _node *next;
} Node;

Node *add(Node *head,int number);
void add(Node **PThead,int number);

int main(){
	Node * head = NULL;
	int number;
	do{
		scanf("%d",&number);
		if(number!=-1){
			head = add(head,number);
			add(&head,number);
		}
			
	}while(number!=-1);
	return 0;
}

Node *add(Node *head,int number)
{
	Node *IMp = (Node*)malloc(sizeof(Node));
	IMp->value = number;
	IMp->next = NULL;
	Node *last = head;
	if(last){
		while(last->next){
		    last = last->next;
		}
			last->next = IMp;
	}else{
		head = IMp; 
		}
	return head;
}

void add(Node **PThead,int number)
{
	Node *IMp = (Node*)malloc(sizeof(Node));
	IMp->value = number;
	IMp->next = NULL;
	Node *last = PThead;
	if(last){
		while(last->next){
		    last = last->next;
		}
			last->next = IMp;
	}else{
		PThead = IMp; 
		}
}
