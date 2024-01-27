                  //ARRAY OF EMPLOYEE IN C++
#include<iostream>

using namespace std;
class Employee{
	string name;
	int age;
	public:
		getdata(){
			cout<<"enter the name: ";
			cin>>name;
			cout<<"enter the age: ";
			cin>>age;
		}
		putdata(){
			cout<<"name is "<<name<<endl;
			cout<<"age is "<<age;
		}
};
const int size=3;
int main(){
	int i;
	Employee manager[size];
	for(i=0;i<size;i++){
		cout<<"details of manager "<<i+1<<"\n";
		manager[i].getdata();
	}
	cout<<"\n";
	for(i=0;i<size;i++){
		cout<<"\nManager"<<i+1<<"\n";
		manager[i].putdata();
	}
}

