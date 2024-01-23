               //EXCEPTIONAL HANDLING 
#include<iostream>
using namespace std;
int main(){
float a,b,c;
cout<<"enter the number :";
   cin>>a>>b;
try{
	if(b!=0){
		c=a/b;
		cout<<c;
	}
	else{
		throw b;
		
	}
}
catch(float e){
	cout<<"Infinite";
}
}
