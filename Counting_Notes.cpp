#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	int hun;
	int fifty;
	int twenty;
	int one;
	int n=1;
	switch(n){
		case 1:
			hun=num/100;
			num=num%100;
			cout<<"Hundered notes are: "<<hun<<endl;
		case 2:
			fifty=num/50;
			num=num%50;
			cout<<"Fifty notes are: "<<fifty<<endl;
		case 3:
			twenty=num/20;
			num=num%20;
			cout<<"twenty notes are: "<<twenty<<endl;
		case 4:
			one=num/1;
			num=num%1;
			cout<<"One notes are: "<<one<<endl;
	}
	
}
