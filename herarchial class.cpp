#include<iostream>
using namespace std;
class A{
		public:
			void geta(){
				cout<<"inside class A"<<endl;
			}
};
class B :public A{
		public:
			void getb(){
				cout<<"Inside class B"<<endl;
			}
	
};
class C: public A{
	public:
	void getc(){
		cout<<"Inside class C"<<endl;
	}
};
int main(){
	B bb;C cc;
	bb.geta();
	bb.getb();
 	cc.geta();
 	cc.getc();
}



