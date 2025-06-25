  //                          Virtual Function : run time polymorphism
#include<iostream>
using namespace std;
class A{
	public:
		virtual void show(){			//it is the abstract class and its object will not be formed
			cout<<"\nParent Class";        
		}
};
class B:public A{
	public:
		void show(){
			cout<<"\nChild Class";
		}
};
int main(){
	A *ptr;
	B aa;      
	ptr=&aa;
	ptr->show();
}
