#include<iostream>
using namespace std;
int main(){
//	int a=20;
//	int *ptr=&a;
//	cout<<"value of a is "<<*(ptr);
//	int *p=new int (50);
//	cout<<"\nvalue at address p is "<<p;
//	cout<<"\nvalue of p is "<<*(p);
//	cout<<"\naddress of p is "<<sizeof(p);

int i;
int *arr=new int[5];
for(i=0;i<5;i++){
	cout<<"Enter the element";
	cin>>arr[i];
}
for(i=0;i<5;i++){
	cout<<arr[i]<<endl;
}
	
}
