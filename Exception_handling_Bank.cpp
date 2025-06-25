#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
	double bal=1000.0;
	try{
		double amt;
		cout<<"Enter the Deposit Amount: ";
		cin>>amt;
		if(amt<=0){
			throw invalid_argument("Invalid Deposit Amount");
		}
		bal=bal+amt;
		cout<<"Current Balance is :"<<bal<<endl;
		cout<<"Enter the withdrawn amount: ";
		cin>>amt;
		if(amt<=0){
			throw invalid_argument("Invalid Withdrawn Amount");
		}
		if(amt>bal){
			throw runtime_error("Insufficient Fund");
		}
		bal=bal-amt;
		cout<<"Current balance is: "<<bal<<endl;
		
	}
	catch(exception &e){
		cout<<e.what();
	}
}
