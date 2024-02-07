#include<iostream>
using namespace std;
int bsearch(int arr[],int low,int high,int x){
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]==x){
			return mid+1;
		}
		else if(arr[mid]>x){
			high=mid-1;
			return bsearch(arr,0,high,x);
		}
		else if(arr[mid]<x){
			low=mid+1;
			return bsearch(arr,low,high,x);
		}
		
	}
		return -1;
}
int main(){
	int arr[]={2,4,5,6,8,9,13};
	int x;
	int size=sizeof(arr)/sizeof(arr[0]);
	cin>>x;
	int result=bsearch(arr,0,size-1,x);
	if(result==-1){
		cout<<"element not found";
	}else{
		cout<<"position is"<<result;
	}
}

