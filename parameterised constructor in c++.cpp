#include<iostream>
using namespace std;
class demo{
int a,b;
public:
	demo(int m,int n){
		a=m;
		b=n;
		
	}
	void putdata(){
		cout<<"value of a is "<<a<<endl<<"value of b is "<<b;
	}
};
int main(){
	int a1,b1;
	cout<<"enter the value of a1: ";
	cin>>a1;
	cout<<"enter the value of b1: ";
	cin>>b1;
	demo obj(a1,b1);
	obj.putdata();
}
