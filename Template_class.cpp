#include<iostream>
using namespace std;
template<class T>
T swap(T &x,T &y){
	T t;
	t=x;
	x=y;
	y=t;
	return x;
	return y;
	
}
int main(){
	char ch1,ch2;
	cout<<"Enter the values: ";
	cin>>ch1;
	cout<<endl;
	cin>>ch2;
	cout<<endl;
	swap(ch1,ch2);
	cout<<"After swaping the value of ch1 is: "<<ch1<<endl<<"ch2 is :"<<ch2<<endl;
	
	int a,b;
	cout<<"Enter the values: ";
	cin>>a;
	cout<<endl;
	cin>>b;
	cout<<endl;
	swap(a,b);
	cout<<"After swaping the value of a is: "<<a<<endl<<"b is :"<<b<<endl;
}
