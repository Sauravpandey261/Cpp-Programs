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
class C{
	public:
	void getc(){
		cout<<"Inside class C"<<endl;
	}
};
class D: public C,public B{
	public:
		void getd(){
			cout<<"Inside class D"<<endl;
		}
};
int main(){
	D dd;
	dd.geta();
	dd.getb();
 	dd.getc();
 	dd.getd();
}



