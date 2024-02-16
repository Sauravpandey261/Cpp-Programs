#include<iostream>
using namespace std;
class sumation{
	private:
		int num,add=0;
		public:
		int getdata(){
				cout<<"Enter the number ";
				cin>>num;
				add=num+add;
			}
		int putdata(){
			cout<<"sum is: "<<add<<endl;
	}
};
int main(){
	sumation obj[5];
	sumation s;
	int n,i;
	cout<<"enter the total number :";
	cin>>n;
	for(i=0;i<n;i++){
		obj[i].getdata();
	}
	for(i=0;i<n;i++){
		obj[i].putdata();
	}
	}











