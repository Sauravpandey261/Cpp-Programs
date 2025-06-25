#include<iostream>
using namespace std;
class node{
	public:
		int value;
		node *next;
	node(){
		value=0;
		next=NULL;
	}
};
class LinkedList{
	node *head;
	public:
		LinkedList(){
			head=NULL;
		}
		void insert(int v){
			node *temp=new node();
			temp->value=v;
		if(head==NULL){
			head=temp;
		}
		else{
			node *p=head;
			while(p->next!=NULL){
				p=p->next;
			}
			p->next=temp;
			
		}
		}
		void printLL(){
			node *t=head;
			while(t!=NULL){
				cout<<t->value<<" ";
				t=t->next;
			}
		}
};
int main(){
	LinkedList l1;
	l1.insert(10);
	l1.insert(20);
	l1.insert(30);
	l1.insert(40);
	l1.insert(50);
	l1.printLL();
}
