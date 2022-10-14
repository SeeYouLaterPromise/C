#include <stdio.h>
#include <stdlib.h>

typedef struct _node{//node：结点 
	int value;
	struct _node *next;
} Node;

typedef struct _list{ 
	Node* head;
} List;

void add(List* pList, int number);
void print(List* pList);
void search(List* pList,int num);
void delet(List* pList,int num);
void clean(List* pList);

int main(){
	List list;
	list.head = NULL; 
	int number;
	while(scanf("%d",&number)!=EOF){
		add(&list,number);
	}
	//Node* p;
/*	for(p=list.head;p;p=p->next){
		printf("%d\t",p->value);
	}*/
	print(&list);
	int target;
	scanf("%d",&target);
	search(&list,target);
	clean(&list);
	return 0;
}

void add(List* pList, int number)
{
	Node *p = (Node*)malloc(sizeof(Node)); 
	p->value = number; 
	p->next = NULL;
	Node *last = pList->head; 
	if(last){
		while(last->next){
			last = last->next;
		}
		last->next = p;
	}else{
		pList->head = p;//第一次赋值进的地方 
	}
	//free(p); //这里*p作为中介在完成他的使命之后为什么不能free 
}//是因为*p去malloc一段空间交给list，你给他free掉，那不寄？//free是还给内存当时借来的空间 

void print(List* pList)
{
	Node* p;
	for(p=pList->head;p;p=p->next){
		printf("%d\t",p->value);
	}
}

void search(List *pList,int num)
{
	int ret = 0;
	Node* p;
	for(p=pList->head;p;p=p->next){
		if(num==p->value){
			ret = 1;
		}
	}
	if(ret){
		printf("I found it!");
	}else{
		printf("Where?");
	}
}

void delet(List* pList,int num)
{
	Node *p,*q;
	//Node* q;
	for(q=NULL,p=pList->head;p;q=p,p=p->next){
		if(p->value==num){
			if(q){
				q->next = p->next;
			}else{
				pList->head = p->next;
			}
			free(p);
			break;
		}
	}
}

void clean(List *pList)
{
	Node *p,*q; 
	for(p = pList->head;p;p = q){
		q = p->next;
		free(p);
	}
}
