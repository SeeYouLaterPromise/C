#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
	int value;
	struct _node *next;
} Node;

int main(){
	Node * head = NULL;
	int number;
	do{
		scanf("%d",&number);
		if(number!=-1){
			Node *IMp = (Node*)malloc(sizeof(Node));
			IMp->value = number;
			IMp->next = NULL;
			//IM是中间的缩写 
			Node *last = head;
			if(last){
				while(last->next){
					last = last->next;
				}
				last->next = IMp;//等待下一个number的输入 
			}else{
				head = IMp;//这个else专门为第一次输入打造 
			}
		}
	}while(number!=-1);
	
	Node *p;
	for(p = head;p;p = p->next){
		printf("%d\t",p->value);
	}
	printf("\n");
	return 0;
}
