#include<iostream>
using namespace std;
int main(){
	int arr[10],i,num,element,position,size;
	cout<<"enter the size of array:";
	cin>>size;
	for(i=0;i<=size-1;i++){
		cout<<"Enter the element "<<i<<" : ";
		cin>>arr[i];
	}
	cout<<"enter the position of inserting of an array :";
	cin>>position;
	cout<<"enter the element ";
	cin>>element;
	for(i=size-1;i>=position-1;i--){
		arr[i+1]=arr[i];
		
	}
	arr[position-1]=element;
	size++;
	for(i=0;i<=size-1;i++){
		cout<<arr[i]<<endl;
	}	
}
