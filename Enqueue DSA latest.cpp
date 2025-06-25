#include<iostream>
using namespace std;
int queue[10],n=10,front=-1,rear=-1;
void insert(){
	int val;
	if(rear==n-1){
		cout<<"Queue is full";
	}else{
			front=0;
			cout<<"Insert the element in queue: ";
			cin>>val;
			rear++;
			queue[rear]=val;
		
	}
}
void deleted(){
	if (front==-1 ||front>rear){
		cout<<"Queue underflow";
	}else{
		cout<<"Element deleted from queue";
		front++;
	}
}
void display(){
	if (front==-1){
		cout<<"Queue is empty";
	}else{
		for(int i=front;i<=rear;i++){
			cout<<queue[i]<<" "<<endl;
			
		}
	}
}
int main(){
int ch;
cout<<"1 )Press for Insertion"<<endl;
cout<<"2 )Press for Deletion"<<endl;
cout<<"3 )Press for Display"<<endl;
cout<<"4 )Press for Exit"<<endl;
do{
	cout<<"ENter your choice: "<<endl;
	cin>>ch;
	switch(ch){

	case 1:insert();
	break;
	case 2:deleted();
	break;
	case 3:display();
	break;
	case 4:cout<<"exit"<<endl;
	break;
	default:cout<"ENter valid choice";
		
}
}while(ch!=4);
	
}
