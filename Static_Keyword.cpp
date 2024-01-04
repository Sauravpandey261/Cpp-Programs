#include<iostream>
using namespace std;
class Hero{
	public:
		static int timeToComplete;
		
	static int random(){ 
		return timeToComplete;
	}
};
int Hero::timeToComplete=5;

int main(){
	cout<<"Static member "<<Hero::timeToComplete<<endl;    //  It is the right way
//	Hero a;			It is not recomended we can directly access it through class and we did not have to create object of it
//	cout<<a.timeToComplete;

	cout<<Hero::random();
}
