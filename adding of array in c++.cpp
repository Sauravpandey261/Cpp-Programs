#include<iostream>
using namespace std;
int main(){
	int a[]={2,5,3,1,9};
	int i,j=;
	int b[]={7,8,6};
	int c[10];
	for(i=0;i<5;i++){
		c[i]=a[i];
		
	};
	for(i=5;i<8;i++){
		c[i]=b[j];
		j++;
	}
	for(i=0;i<8;i++){
		cout<<c[i]<<endl;
	}
}
