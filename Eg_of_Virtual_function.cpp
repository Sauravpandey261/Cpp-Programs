#include<iostream>
using namespace std;
class Bank{
	public:
		float a,interest,totBalance;
		int accoutNo;
		virtual void calculateInterest(float balance)=0;
		
		void showInfo(int a){
			accountNo=a;
			cout<<"Your account number is "<<accountNo<<endl;
		}
};
class Sbi:public Bank{   //derived class
	public:
		void calcutateInterest(float balance){
			a=balance;
			interest=a*5*1/100;
			totBalance=a+interest;
			cout<<"your interest is "<<interest<<endl;
			cout<<"your total balance is "<<totBalance<<endl;
		}
};
int main(){
	Sbi obj;
	obj.showInfo(100);
	obj.calculateInterest(1000);
}
