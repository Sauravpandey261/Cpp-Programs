#include<iostream>
using namespace std;
int main(){
	int arr[]={7,9,2,5,1};
	int size;
	size=sizeof(arr)/sizeof(int);
	int i,j;
	for(i=0;i<=size-1;i++){
		int minIndex=i;
		for(j=i+1;j<=size-1;j++){
			if(arr[j]<arr[minIndex]){
				minIndex=j;
			}
	
		}
		swap(arr[minIndex],arr[i]);
	}
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}

}

