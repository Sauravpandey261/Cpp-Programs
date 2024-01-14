#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	int rev=0;
	while(n!=0){
		rev=(rev*10)+(n%10)+rev;
		n=n/10;
	}
	if(rev>324000){
		cout<<"0";
	}
	else{
		cout<<rev;
	}
}
