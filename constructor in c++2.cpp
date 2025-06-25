#include<iostream>
using namespace std;
class a{
int x;
public:
	a(){
		x=30;
	}
	void putdata(){
		cout<<"value of x is "<<x;
	}
};
int main(){
	a obj;
	obj.putdata();
}


