#include<iostream>
using namespace std;
int sum(int,int);
int main(){
	int a,b;
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	cout<<sum(a,b);
	
}
int sum(int a,int b){
	return a+b;
}
