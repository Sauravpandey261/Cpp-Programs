#include<iostream>
using namespace std;
class Animal{
	public:
		void speek(){
			cout<<"Speeking"<<endl;
		}
};
class Dog:public Animal{
	public:
		void speek(){
			cout<<"barking"<<endl;
		}
};
int main(){
	Dog obj;
	obj.speek();
}
