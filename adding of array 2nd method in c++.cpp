#include<iostream>
using namespace std;
int main(){
	int a[]={2,5,3,1,9};
	int i,j,d[10],e[10];
	int b[]={7,8,6};
	int c[10];
	for(i=0;i<5;i++){
		c[i]=a[i];
		
	};
	for(j=0;j<3;j++){
		d[j]=b[j];
		j++;
	}
	e[i]=c[i]+d[j];
	cout<<e[i]<<endl;
}
