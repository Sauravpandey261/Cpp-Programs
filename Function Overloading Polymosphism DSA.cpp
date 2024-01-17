#include<iostream>
using namespace std;
class ApnaCollege{
	public:
		void fun(){
			cout<<"I am a function with no arguments"<<endl;
		}
		void fun(int x){
			cout<<"I am a function with int arguments"<<endl;
		}
		void fun(double x){
			cout<<"I am a function with double arguments"<<endl;
		}
};
int main(){
	ApnaCollege obj;
	obj.fun();
	obj.fun(5);
	obj.fun(4.2);
}
