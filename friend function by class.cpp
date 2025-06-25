#include<iostream>
using namespace std;
class b;
class a{
	int x;
	friend void func(a,b);
};
class b{
	int y;
	friend void func(a,b);
};

void func(a aa,b bb){
	aa.x=10;
	bb.y=10;
	cout<<aa.x+bb.y;
}
int main(){
	a obj1;
	b obj2;
	func(obj1,obj2);
}
