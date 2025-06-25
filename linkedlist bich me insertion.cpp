#include<stdio.h>
struct node{
	int data;
	struct node * next;
};
void traversing(struct node *ptr){
	int count=0;
	while (ptr!=NULL){
	printf("%d\n",ptr->data);
	ptr=ptr->next;
	count++;

}//printf("no of nodes is %d",count);
}

/*struct node *insertAtStart(struct node *first,int data){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->next=first;
	return ptr;
}*/
/*struct node *insertAtIndex(struct node *first,int data,int index){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	struct node *p=first;
	int i=0;
	while(i!=index-1){
		p=p->next;
		i++;
	}*/
/*struct node *insertAtEnd(struct node *first,int data){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	struct node *p=first;
	ptr->data=data;
	while(p->next!=NULL){
		p=p->next;
	}
	ptr->next=NULL;
	p->next=ptr;
	return first;
}*/
struct node *insertAtNode(struct node *first,struct node *prenode,int data){
	struct node *ptr=(struct node *)malloc(sizeof(struct ode));
	ptr->data=data;
	ptr->next=prenode->next;
	prenode->next=ptr;
	return first;
}

int main(){
struct node *first,*second,*third;
first=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));

first->data=15;
first->next=second;
second->data=20;
second->next=third;
third->data=25;
third->next=NULL;

//first=insertAtStart(first,50);
insertAtNode(first,second,5);
traversing(first);
//traversing(first);
}
