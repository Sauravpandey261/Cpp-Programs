#include<iostream>
using namespace std;
int swap(int *a,int *b);
int swap(int *a,int *b){
int z=*a;
*a=*b;
*b=z;
}
int main(){
	int a,b,c;
	cout<<"enter the no. 1:";
	cin>>a;
	cout<<"enter the no. 2:";
	cin>>b;
	swap(&a,&b);
	cout<<"after swaping values"<<a<<" "<<b<<endl;
}
