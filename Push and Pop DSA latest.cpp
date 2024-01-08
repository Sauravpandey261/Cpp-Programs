#include<iostream>
using namespace std;
int arr[100],top=-1,choice,n,i;
void push(){
	int value;
	if (top==n){
		cout<<"overflow";
	}else{
		cout<<"Enter the value: ";
		cin>>value;
		top=top+1;
		arr[top]=value;
	}
}
void pop(){
	if (top==-1){
		cout<<"underflow";
	}
	else{
		top=top-1;
	}
}
void display(){
	if(top>=0){
	for(i=top;i>=0;i--){
		cout<<arr[i]<<endl;
	}
}
	else{
		cout<<"stack is empty ";
	}
}
int main(){
	cout<<"Enter the no of elements you want to insert in an array: ";
	cin>>n;
while(choice!=4){
	cout<<"Choose one from the options:\n1. Push\n2. Pop\n3. Display\n4.Exit\n";
	cout<<"Enter the choice: \n";
	cin>>choice;
	switch(choice){
	case 1:
		push();
	break;
	case 2:
		pop();
	break;	
	case 3:
		display();
	break;
	case 4:
		break;
}
}
}
