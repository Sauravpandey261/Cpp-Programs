#include<iostream>
using namespace std;
class check{
	private:
		int a,b;
		public:
		int getdata(){
			cout<<"Enter the first no: ";
			cin>>a;
			cout<<"Enter the second no:";
			cin>>b;
		}
		int putdata(){
			if(a>b){
				cout<<"A is greater than B";
			}
			else{
				cout<<"B is greater than A";
			}
		}
};
int main(){
	check obj;
		obj.getdata();
		obj.putdata();
}










