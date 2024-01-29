#include<iostream>
using namespace std;
int main(){
	int arr[]={4,3,2,5,7,6,1,8,6};
	int size=sizeof(arr)/sizeof(int);
	int i,ans=0;
	for(i=0;i<size;i++){
		ans=ans^arr[i];
	}
	for(i=1;i<size;i++){
		ans=ans^i;
	}
	cout<<"Duplicate value is :"<<ans<<endl;
}

