#include<iostream>
using namespace std;
class coding{
	private:
		int a,b,c;
		friend int ffunction(coding);
			
};
int ffunction(coding x){
	x.a=20;
	x.b=30;
	x.c=x.a+x.b;
	return x.c;d
	}
int main(){
	coding obj;
	cout<<ffunction(obj);
}
