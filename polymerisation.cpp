#include<iostream>
using namespace std;
void add(int a,int b);
void add(int a,double b);
void add(int a,int b,int c);
int main(){
    add(2,5);
    add(2,4,7);
    add(4,19.3);
    
}
void add(int x,int y){
	cout<<"no are "<<x<<" and "<<y<<endl;
}
void add(int x,double y){
	cout<<"no are "<<x<<" and "<<y<<endl;
}
void add(int x,int y,int z){
	cout<<"no are "<<x<<" , "<<y<<" and "<<z<<endl;
}

