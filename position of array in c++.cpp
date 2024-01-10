#include<iostream>
using namespace std;
int main(){
	int arr[5],i,size,element;
	cout<<"enter the size of array:";
	cin>>size;
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"enter the element to find the position of :";
	cin>>element;
	for(i=0;i<size;i++){
		if(arr[i]==element){
			cout<<"position of "<<element<<" is "<<i;
		}
	}
}
