#include<iostream>
using namespace std;
class coding{
	public:
		coding(){       //Constructor
			cout<<"Creating Memory "<<endl;
		}
		~coding(){      //Distructor
			cout<<"free memory"<<endl;
		}
};
int main(){
	coding obj;
	return 0;
}

