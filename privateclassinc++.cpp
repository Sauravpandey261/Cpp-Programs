#include<iostream>
#include<string>
using namespace std;
	class car{
		private:
			string brand;
			string name;
			int year;
		public:
			void info(){
				cout<<"enter the brand name: ";
				cin>>brand;
				cout<<"enter the model name: ";
				cin>>name;
				cout<<"Enter manufacturing year: ";
				cin>>year;
			}
			void result(){
				cout<<"Your brand name is "<<brand<<endl;
				cout<<"Your model name is "<<name<<endl;
				cout<<"Year is "<<year<<endl;
			}
	};
int main(){
	car car1,car2;
	car1.info();
	car1.result();
	car2.info();
	car2.result();
};
