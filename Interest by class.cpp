#include<iostream>
#include<math.h>
using namespace std;
class simple{
	int t;
	double r,P,S,p;
	public:
		simpleI(){
			cout<<"enter the principal amount :";
			cin>>p;
			cout<<"enter the rate of interest :";
			cin>>r;
			cout<<"enter the time in years :";
			cin>>t;
		}
		getdata(){
			cout<<"Simple Interest :";
			P=1+r*t;
			cout<<P*p<<endl;
		}
		compound(){
			cout<<"Compound Interest :";
			S=pow((1+r),t);
			cout<<S*p<<endl;
		}
};
int main(){
	simple interest;
	interest.simpleI();
	interest.getdata();
	interest.compound();
	}
