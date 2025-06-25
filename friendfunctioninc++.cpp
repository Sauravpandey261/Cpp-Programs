#include<iostream>
using namespace std;
class coding{
	private:
		int a,b,c;
		void test(){
			cout<<"enter the values: ";
			cin>>a>>b;
			cout<<a+b;
		}
		friend void ffunction(coding);	
};
void ffunction(coding x){
	x.test();
}
int main(){
	coding obj;
	ffunction(obj);
}
