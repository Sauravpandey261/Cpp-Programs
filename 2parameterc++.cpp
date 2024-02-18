#include<iostream>
using namespace std;
class coding{
	int a,b;
	public:
		coding(int x,int y){         
			a=x;
			b=y;
			cout<<"Value of a and b is "<<a<<b;
		}
};
int main(){
	coding obj(1,2);
}

