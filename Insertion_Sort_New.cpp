#include<iostream>
using namespace std;
int main(){
	int i,j;
	int arr[]={10,4,1,7,11,5,19,22,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(i=1;i<n;i++){
		int temp=arr[i];
		for(j=i-1;j>=0;j--){
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
		}
		arr[j+1]=temp;
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
