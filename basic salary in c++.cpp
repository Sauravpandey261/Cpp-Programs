#include<iostream>
using namespace std;
class coding{
	float basicsalary,totalsalary,leave,onedaysalary,workingdays;
	public:
		coding(){       //Constructor
			cout<<"Welcome to employee salary system "<<endl;
		}
		void salary(){
			cout<<"enter the basic salary :";
			cin>>basicsalary;
			cout<<"enter the leave:";
			cin>>leave;
			onedaysalary=basicsalary/30;
			workingdays=30-leave;
			totalsalary=workingdays*onedaysalary;
			cout<<endl<<"you will get "<<totalsalary<<"ruppees"<<endl;
		}
		~coding(){
			cout<<"thanks for using this system...";
		}
};
int main(){
	coding obj;
	obj.salary();
	return 0;
}

