#include<iostream>
using namespace std;
int main(){
	int arr[10],i,size,pos;
	cout<<"enter the size:";
	cin>>size;
	for(i=0;i<=size-1;i++){
		cin>>arr[i];
	}
	cout<<"enter the position of element:";
	cin>>pos;
	for(i=pos-1;i<=size-1;i++){
		arr[i]=arr[i+1];
	}
	size--;
	for(i=0;i<=size-1;i++){
		cout<<arr[i];
	}
}
