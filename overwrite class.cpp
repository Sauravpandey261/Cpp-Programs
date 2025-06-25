#include<iostream>
using namespace std;
class A{
	public:
	void print(){
		cout<<"Inside class A"<<endl;
	}
};
class B: public A{
	public:
		void print(){
			cout<<"Inside class B"<<endl;
		}
};
int main(){
	B bb;
	bb.A::print();
	bb.print();
}
