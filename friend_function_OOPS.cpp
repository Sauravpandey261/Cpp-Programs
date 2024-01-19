#include<iostream>
using namespace std;
class B;
class A{
		int a;
	public:	
		void input(){
		cout<<"Enter the number1:";
		cin>>a;
		}
	friend void max(A,B);
};
class B{
		int b;
	public:
		void getdata(){
		cout<<"Enter the number2:";
		cin>>b;
		}
	friend void max(A,B);
};
void max(A aa,B bb){
	if(aa.a>bb.b){
		cout<<"Max is "<<aa.a;
	}
	else{
		cout<<"Max is "<<bb.b;
	}
}
int main(){
	A aa;
	B bb;
	aa.input();
	bb.getdata();
	max(aa,bb);
}
