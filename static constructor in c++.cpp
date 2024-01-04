            // Static constructor
#include<iostream>
using namespace std;
int count=0;
class demo{
	int x,y;
	static int z;
public:
	void getdata(){
		cout<<"enter the value: ";
		cin>>x>>y;
		z++;
	}
	void putdata(){
		cout<<"value of x is "<<x<<endl<<"value of y is "<<y<<endl;
		cout<<"static value is "<<z<<endl;
	}
};
int demo::z;
int main(){
	demo aa,bb;
	aa.getdata();
	bb.getdata();
	aa.putdata();
	bb.putdata();
	
}
