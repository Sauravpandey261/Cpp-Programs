#include<iostream>
using namespace std;
class check{
	private:
		int a,b,i;
		public:
		int getdata(){
			cout<<"Enter the first no: ";
			cin>>a;
			cout<<"Enter the last no:";
			cin>>b;
		}
		int putdata(){
			for(i=a;i<=b;i++){
				if(i%2==0){
					cout<<i<<" is even no. "<<endl;
				}
			else{
				cout<<i<<" is odd no. "<<endl;
			}
		}
	}
};
int main(){
	check obj;
		obj.getdata();
		obj.putdata();
}










