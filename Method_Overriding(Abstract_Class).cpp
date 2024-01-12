//							Abstract CLass : Method Overriding
#include<iostream>
using namespace std;
class Demo{
	public:
		virtual void f1()=0;
		
		void f2(){
			cout<<"I am f2 function"<<endl;
		}
};
class ABC:public Demo{
	public:
	void f1(){
		cout<<"Hey I am f1 function";
	}
};
int main(){
	ABC obj;
	obj.f2();
	obj.f1();
}
