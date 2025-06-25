#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
	int n,d,result;
	cout<<"Enter the numenator: ";
	cin>>n;
	cout<<"Enter the demominator: ";
	cin>>d;
	try{
		if(d==0){
			throw d;
		}
		
	}
	catch(int x){
		cout<<"Exception: Division by 0 is not possible"<<endl;
	}
	result = n/d;
	cout<<"The value of the division is : "<<result<<endl;
}
