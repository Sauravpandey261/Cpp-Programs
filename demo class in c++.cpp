#include<iostream>
using namespace std;
class demo{
	int a,b;
	void getvalue(){
		cout<<"enter the value of a :";
		cin>>a;
		cout<<"enter the value of b :";
		cin>>b;
	}
	friend void func(demo);
};
void func(demo x){
	x.getvalue();
	if(x.a>x.b){
		cout<<"a is greater";
	}
	else{
		cout<<"b is greater";
	}
}
