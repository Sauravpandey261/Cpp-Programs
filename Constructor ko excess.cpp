#include<iostream>
using namespace std;
class A{
	protected:
	int a;
public:
		A(int x){
			a=x;
		}
		void display(){
			cout<<"Value of a is "<<a<<endl;
		}
};
class B{
	protected:
	int b;
public:
		B(int y){
			b=y;
		}
		void output(){
			cout<<"Value of b is "<<b<<endl;
		}
};
class C:public A,public B{
	protected:
	int c;
	public:
		C(int p,int q,int r):A(p),B(q){
			c=r;
		}
		void putdata(){
			cout<<"Value of c is "<<c<<endl;
		}
};
int main(){
	C cc(5,68,89);
	cc.display();
	cc.output();
	cc.putdata();
}


