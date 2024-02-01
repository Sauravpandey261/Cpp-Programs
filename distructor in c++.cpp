#include<iostream>
using namespace std;
int count=0;
class demo{
public:
	demo(){
	count++;
	cout<<"created count value is :"<<count<<endl;
	}
	~demo(){
		count--;
		cout<<"destroyed count value is: "<<count<<endl;
	}
};
int main(){
	demo aa,bb,cc;
	{
		demo dd;
	}
}
