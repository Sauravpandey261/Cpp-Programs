#include<iostream>
using namespace std;
class b;
class a{
	int x;
	friend class b;
};
class b{
	public:
		void display(a t1){
			t1.x=4;
			cout<<t1.x;
		}
};
int main(){
	a obj1;
	b obj2;
	obj2.display(obj1);
	return 0;
}
