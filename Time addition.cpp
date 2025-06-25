#include<iostream>
using namespace std;
class Time{
	int h,m;
	public :
		void getdata();
		void add(Time,Time);
		void putdata();
};
void Time::getdata(){
	cout<<"\nEnter the time and minute: ";
	cin>>h>>m;  
}
void Time::add(Time aa,Time	bb){
		h=(aa.m+bb.m)/60;
		m=(aa.m+bb.m)%60;
		h=h+aa.h+bb.h;
}
void Time::putdata(){
	cout<<"\nhour: "<<h<<" minutes: "<<m;
}
int main(){
	Time aa,bb,cc;
	aa.getdata();
	bb.getdata();
    cc.add(aa,bb);
	aa.putdata();
	bb.putdata();
	cc.putdata();
}
