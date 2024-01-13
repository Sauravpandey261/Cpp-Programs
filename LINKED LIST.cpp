#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
void traversing(struct Node *ptr){
	printf("elements are :\n");
	int count =0;
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->next;
		count++;
	}
	printf("total no of node is :%d",count);
}
struct Node *insertAtStart(struct Node *first,int data){
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	ptr->next=first;
	return ptr;
}
int main(){
	struct Node *first,*second,*third,*fourth;
	first=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third =(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	
	first->data=15;
	first->next=second;
	
	second->data=23;
	second->next=third;
	
	third->data=13;
	third->next=fourth;
	
	fourth->data=55;
	fourth->next=NULL;

	first=insertAtStart(first,58);
	traversing(first);
}
