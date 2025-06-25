#include<iostream>
using namespace std;
int main(){
	int arr[10],i,j,key,size;
	cout<<"Enter the size of array: ";
	cin>>size;
	for(i=0;i<size;i++){
		cout<<"Enter the element of arr"<<i<<":";
		cin>>arr[i];
	}
	cout<<"Elements in ascending order by insertion sort :\n";
	for(i=1;i<size;i++){
		key=arr[i];
		j=i-1;
			while (arr[j]>key && j>=0){
				arr[j+1]=arr[j];
				j--;
			}	
			arr[j+1]=key;
	}
	for(i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
}
