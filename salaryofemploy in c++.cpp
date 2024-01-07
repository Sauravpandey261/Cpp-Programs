#include<iostream>
using namespace std;
class salary{
	private:
		int num,leave,s,wds;
		public:
		int getdata(){
			cout<<"Enter the total days: ";
			cin>>num;
			cout<<"Enter the no of leave: ";
			cin>>leave;
		}
		int putdata(){
			cout<<"salary of one day is 1000"<<endl;
			wds=num*1000;
		    s=wds-(leave*1000);
		    cout<<"Total salary is:";
			cout<<s;
		}
};
int main(){
	salary obj;
		obj.getdata();
		obj.putdata();
}










