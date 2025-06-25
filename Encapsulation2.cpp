#include<iostream>
#include<stdlib.h>
using namespace std;

class Student{
	private:
		int age;
		string name;
		int height;
	public:
		int getAge(int ag){
			age=ag;
			return this->age;
		}
};
int main(){
	Student first;
	cout<<"Age is :"<<first.getAge(23);
}
