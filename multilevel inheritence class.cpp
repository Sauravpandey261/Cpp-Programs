#include<iostream>
using namespace std;
class A{
	protected:
		int x;
		public:
			void geta(){
				cout<<"enter the no. ";
				cin>>x;
			}
};
class B :public A{
	protected:
		int y;
		public:
			void getb(){
				cout<<"enter the no. ";
				cin>>y;
			}
	
};
class C: public B{
	public:
	void add(){
		cout<<"addition is :"<<x+y;
	}
};
int main(){
	C aa;
	aa.geta();
	aa.getb();
 	aa.add();
}



