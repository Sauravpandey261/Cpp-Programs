#include<iostream>
using namespace std;
class Employee{
	private:
		int a,b,c;
	public:
		int d,e;
		void setData(int a1,int b1,int c1); //Declaration
		void getData(){
			cout<<a<<endl;
			cout<<b<<endl;
			cout<<c<<endl;
			cout<<d<<endl;
			cout<<e<<endl;
		}
};
void Employee :: setData(int a1,int b1,int c1){
	a=a1;
	b=b1;
	c=c1;
}
int main(){
	Employee saurav;
//  saurav.a=34; --> This will throw error because a is private	
	saurav.d=10;
	saurav.e=20;
	saurav.setData(30,40,50);
	saurav.getData();
}
