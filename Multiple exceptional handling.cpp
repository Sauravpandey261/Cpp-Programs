#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter the number ";
	cin>>a;
	try{
		if(a==0){
			throw a;
			
		}
		else if(a==100){
			throw 'a';
		}
		else if(a==1000){
			throw 15.5;
		}
	}
	catch(int e){
		cout<<"value is "<<e;
	}
	catch(char e){
		cout<<"character"<<e;
	}
	catch(double e){
		cout<<"float value "<<e;
	}

	
}
