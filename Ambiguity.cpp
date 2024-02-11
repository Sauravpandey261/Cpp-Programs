#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
	try{
	double a=10;
	double b=0;
	double c=a/b;
		if(c>=0 || c<0){
		cout<<"Valid and value is "<<c<<endl;
	}
	else{
		throw runtime_error("Undefined");
	}
	}
	catch(exception &e){
		cout<<e.what();
	}
}
